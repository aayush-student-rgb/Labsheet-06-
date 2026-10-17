#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key;
    bool found = false;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter element to check: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element is present in the array";
    else
        cout << "Element is not present in the array";

    return 0;
}