#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id; 
    string emp_name; 
public:
    void getdata() {
        cout << "Enter employee id: ";
        cin >> emp_id; 
        cout << "Enter employee name: ";
        cin >> emp_name;
    }
    void putdata() {
        cout << "Employee id: " << emp_id << endl; 
        cout << "Employee name: " << emp_name << endl; 
    }
};

int main() {
    const int N = 10; 
    Employee emp[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter details of employee " << i + 1 << ":" << endl;
        emp[i].getdata(); 
    }
    for (int i = 0; i < N; i++) {
        cout << "Details of employee " << i + 1 << ":" << endl;
        emp[i].putdata(); 
    }
    return 0; 
}