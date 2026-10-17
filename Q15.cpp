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

    cout << "Enter sorted elements in ascending order:" << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at position " << position + 1;
    else
        cout << "Element not found";

    return 0;
}