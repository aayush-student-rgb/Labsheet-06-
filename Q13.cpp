#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string names[100];

    cout << "Enter number of students (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of students";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;

    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}