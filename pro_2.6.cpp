#include <iomanip> 
#include <ios> 
#include <iostream> 

using namespace std;

int main()
{

    int num = 50;

    cout << "Before setting the fill char: \n"
        << setw(10);
    cout << num << endl;

    cout << "Setting the fill char"
        << " setfill to *: \n"
        << setfill('*')
        << setw(10);
    cout << num << endl;

    return 0;
}