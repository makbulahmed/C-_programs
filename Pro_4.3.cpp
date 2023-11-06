#include <iostream>
using namespace std;

class Student {
public:

    int roll_no;
    float spi;

    void input_data() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter SPI: ";
        cin >> spi;
    }

    void display_data() {
        cout << "Roll number: " << roll_no << endl;
        cout << "SPI: " << spi << endl;
    }
};

void compare_spi(Student arr[], int n) 
{
    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i].spi > arr[highest].spi) {
            highest = i;
        }
    }

    cout << "The student with the highest SPI is: " << endl;
    arr[highest].display_data();
}

int main() 
{
    Student students[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter data for student " << i + 1 << ":" << endl;
        students[i].input_data();
    }

    compare_spi(students, 10);

    return 0;
}