#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter an integer between 5 and 10: ";
      if (cin >> number){
        if (number >= 5 && number <= 10) {
            break;
        }
    } else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Invalid input. Please try again." << endl;
    }
    cout << "Your input has been accepted." << endl;
    return 0;
}