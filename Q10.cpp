#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], product[10][10] = {};
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10) {
        cout << "Invalid matrix size";
        return 0;
    }

    if (c1 != r2) {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    cout << "Enter first matrix elements:" << endl;

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix elements:" << endl;

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "Product of matrices:" << endl;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << product[i][j] << "\t";

        cout << endl;
    }

    return 0;
}