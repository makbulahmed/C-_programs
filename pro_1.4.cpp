#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float radius;
    float circumference;
    float area;

    cout << "Please enter the radius of a circle: ";
    cin >> radius;
    cout << "\n";

    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;

    cout<< "\tRadius= " << radius << "\n"
        << "\tArea= " << area << "\n"
        << "\tCircumference= " << circumference << "\n";

    return 0;

}