#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        roll_no = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, "Raj", 85.5);
    Student s2(102, "Riya", 90.0);

    cout << "Details of student 1:" << endl;
    s1.display();
    cout << "Details of student 2:" << endl;
    s2.display();

    return 0;
}