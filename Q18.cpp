#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    cout << "Enter sorted integers in ascending order:" << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter integer to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = true;
            cout << "Integer found at position " << mid + 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Integer not found";

    return 0;
}