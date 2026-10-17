#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], diff[10][10];
    int rows, cols;

    cout << "Enter number of rows (1-10): ";
    cin >> rows;

    cout << "Enter number of columns (1-10): ";
    cin >> cols;

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        cout << "Invalid matrix size";
        return 0;
    }

    cout << "Enter elements of first matrix:" << endl;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:" << endl;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> b[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            diff[i][j] = a[i][j] - b[i][j];

    cout << "Difference of matrices:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << diff[i][j] << "\t";

        cout << endl;
    }

    return 0;
}