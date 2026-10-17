#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    long long sum = 0;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}