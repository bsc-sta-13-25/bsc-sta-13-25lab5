#include <iostream>
using namespace std;

int main() {
   int  rows, cols;

    cout << "Enter rows (max 3): ";
    cin >> rows;
    cout << "Enter cols (max 3): ";
    cin >> cols;

    if (rows > 3 || cols > 3 || rows <= 0 || cols <= 0) {
        cout << "Error: dimensions must be between 1 and 3" << endl;
        return 1;
    }
    double** dynamicArray = new double *[rows];

    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new double[cols];

    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for [" << i <<"] [" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }
    cout << "\nYou entered:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}