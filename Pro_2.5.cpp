#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

int main()
{

    double num = 3.142857142857;

    cout << "Before setting the precision: \n"
        << num << endl;

    cout << "Setting the precision using"
        << " setprecision to 5: \n"
        << setprecision(5);

    cout << num << endl;

    cout << "Setting the precision using"
        << " setprecision to 9 : \n "
        << setprecision(9);

    cout << num << endl;

    return 0;
}