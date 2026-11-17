// Program 5: Find the maximum and minimum values in an array
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n;

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

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;

    return 0;
}
