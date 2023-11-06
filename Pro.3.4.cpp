#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int Age;
   

public:
    void get_Details(void);
    void Display_Details(void);
};
void student::get_Details(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Age: ";
    cin >> Age;
}

void student::Display_Details(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << endl<<"Age:" << Age;
}

int main()
{
    student std[MAX]; 
    int n, loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].get_Details();
    }

    cout << endl;

    for (loop = 0; loop < n; loop++) {
        cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].Display_Details();
    }

    return 0;
}