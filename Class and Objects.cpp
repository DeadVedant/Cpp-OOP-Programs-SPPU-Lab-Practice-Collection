/*
Problem Statement:
Create a class "Student" that stores student details like roll number, name, and marks.
Demonstrate the use of:
- Private and Public members
- Member functions defined inside and outside the class
- Constructor and Destructor
- Inline function
- Friend function to display student data
*/

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    string name;

    // Constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructor called\n";
    }

    // Inline function (defined inside class)
    inline void displayBasic() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Function declaration (defined outside class)
    void displayFull();

    // Friend function declaration
    friend void showMarks(Student s);

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
    }
};

// Function definition outside class
void Student::displayFull() {
    cout << "Full Details:\n";
    cout << "Roll: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

// Friend function definition
void showMarks(Student s) {
    cout << "Marks (from friend function): " << s.marks << endl;
}

int main() {
    Student s1(21, "Vedant", 85.5);

    s1.displayBasic();   // inline function
    s1.displayFull();    // outside function

    showMarks(s1);       // friend function

    return 0;
}
