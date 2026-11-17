// Program 1: Print personal details
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, rollNo, department;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your roll number: ";
    getline(cin, rollNo);

    cout << "Enter your department: ";
    getline(cin, department);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n----- Student Details -----" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "Department : " << department << endl;
    cout << "Age        : " << age << endl;

    return 0;
}
