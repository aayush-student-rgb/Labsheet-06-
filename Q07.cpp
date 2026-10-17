#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int rows, cols;

    cout << "Enter number of rows (1-10): ";
    cin >> rows;

    cout << "Enter number of columns (1-10): ";
    cin >> cols;

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        cout << "Invalid matrix size";
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1
                 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << "\t";

        cout << endl;
    }

    return 0;
}