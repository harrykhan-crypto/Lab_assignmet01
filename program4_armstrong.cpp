// Program 4: Check whether a number is an Armstrong number
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid number." << endl;
        return 1;
    }

    // Count the digits
    int digits = 0;
    int temp = number;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    // Add each digit raised to the power of the digit count
    long long sum = 0;
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
