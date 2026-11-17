// Program 6: Search for an element using linear search
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, key;

    cout << "Enter number of elements (1-" << MAX << "): ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << key << " found at index " << position
             << " (position " << position + 1 << ")." << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
