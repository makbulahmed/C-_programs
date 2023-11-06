#include <iostream>
using namespace std;
struct employee {
    int emp_code;
    char emp_name[50];
    int emp_Salary;
    char emp_Branch[50];
};
int main() {
    struct employee emp[3] = { { 1 , "Harry" , 20000 , "Finance" } , { 2 , "Sally" , 50000 , "HR" } ,    { 3 , "John" , 15000 , "Technical" } };
    cout << "The employee information is given as follows:" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Employee ID: " << emp[i].emp_code << endl;
        cout << "Name: " << emp[i].emp_name << endl;
        cout << "Salary: " << emp[i].emp_Salary << endl;
        cout << "Branch: " << emp[i].emp_Branch << endl;
        cout << endl;
    }
    return 0;
}