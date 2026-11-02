#include <iostream>
using namespace std;

double trianglearea(double base, double height) {
    return 0.5 * base * height;
}

double rectanglearea(double length, double width) {
    return length * width;
}

double squarearea(double side) {
    return side * side;
}

int main() {
    int choice;

    while(true) {
        cout << "\n--- area calculator ---" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "choose an option: ";
        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore();
            cout << "invalid input. Enter a number. " << endl;
            continue;

        }

        if (choice == 4) {
            cout << "Program ended." << endl;
            break;

        }
        switch (choice) {
            case 1: {
                double base, height;
                cout << "Enter triangle base: ";
                cout << base;
                cout << "Enter triangle height: ";
                cin >> height;
                if (base <= 0 || height <=0) {
                    cout << "dimensions must be positive." << endl;
                } else {
                    cout << "Triangle area = " << trianglearea(base, height) << endl;
                }
                break;
            }

            case 2: {
                double length, width;
                cout << "Enter rectangle length: ";
                cin >> length;
                cout << "Enter rectangle width: ";
                cin >> width;
            
            if (length <= 0 || width <= 0) {
                cout << "Dimensions must be positive." << endl;
            } else {
                cout << "Rectangle area = "
                     << rectanglearea(length,width) << endl;

            }
            break;
        }
            
        case 3: {
            double side;
            cout << "Enter square side: ";
            cin >> side;

            if (side <= 0) {
                cout << "side must be positive. ";
            } else {
                cout << "Square area = "
                     << squarearea(side) << endl;
            } 
            break;
        }
        default:
        cout << "Invalid choice. select 1, 2, 3, or 4." << endl;
        }
    }
    return 0;
}
