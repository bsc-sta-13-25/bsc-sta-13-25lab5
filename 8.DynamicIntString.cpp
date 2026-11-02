#include <iostream>
#include <string>
using namespace std;

int main() {
    int* dynamicInt = nullptr;
    string* dynamicString = nullptr;

    dynamicInt = new int;
    dynamicString = new string;

    if (dynamicInt == nullptr || dynamicString == nullptr) {
        cout << "Error: memorycould not be allocated";

    }
    else {
        cout << "enter an integer: ";
        cin >> *dynamicInt;
        cin.ignore();
        cout << "Enter a string: ";
        getline(cin, *dynamicString);

        cout << "Value of dynamic integer: " << *dynamicInt << endl;
        cout << "Value of dynamic string: " << *dynamicString << endl;

        delete dynamicInt;
        delete dynamicString;
    }
    return 0;
}