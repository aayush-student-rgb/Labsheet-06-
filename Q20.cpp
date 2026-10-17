#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    cout << "Enter elements in ascending order:" << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    cout << "Largest element = " << arr[n - 1];

    return 0;
}