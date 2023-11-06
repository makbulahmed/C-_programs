#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{

    int num = 50;

    cout << "Before setting the width: \n" << num << endl;

    cout << "Setting the width"
        << " using setw to 5: \n"
        << setw(5);

    cout << num;

    return 0;
}