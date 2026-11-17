// Program 2: Store and display student records using a structure
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    const int MAX = 50;
    Student students[MAX];
    int n;

    cout << "Enter number of students (1-" << MAX << "): ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name    : ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Roll No : ";
        cin >> students[i].rollNo;
        cout << "Marks   : ";
        cin >> students[i].marks;
    }

    cout << "\n----- Student Records -----" << endl;
    cout << "Roll No\tMarks\tName" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i].rollNo << "\t"
             << students[i].marks << "\t"
             << students[i].name << endl;
    }

    return 0;
}
