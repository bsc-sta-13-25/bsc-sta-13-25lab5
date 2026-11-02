#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

string Reverse(string text) {
    string reversed = "";

    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

int main() {
    ifstream file ("data.txt");
    string fileData;

    if (!file.is_open()) {
        cout << "Error: could not open data.txt" << endl;
        return 1;
    }
    getline(file, fileData);
    file.close();

    cout << "Original statement: " << fileData << endl;

    int vowels = 0;

    for (char ch : fileData) {
        char c = tolower(static_cast<unsigned char>(ch));

        if (c == 'a' || c == 'e' ||c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;

    int words = 0;
    string word;
    istringstream input(fileData);

    while (input >> word) {
        words++;
    }

    cout << "Number of words: " << words << endl;

    cout << "Reversed statement: "
         << Reverse(fileData) << endl;

         string modified = fileData;
         bool firstLetter = true;

         for (int i = 0; i < modified.length(); i++) {
            if (isspace(static_cast<unsigned char>(modified[i]))) {
                firstLetter = true;
            } else {
                if (!firstLetter) {
                    modified[i] = toupper(static_cast<unsigned char>(modified[i]));
                }

                firstLetter = false;
            }
         }
         cout << "second letters capitalized: " << modified << endl;
         return 0;
}
