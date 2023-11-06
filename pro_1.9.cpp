
// C++ program to check
// for even or odd
#include <iostream>
using namespace std;

// Returns true if n is
// even, else odd
bool isEven(int n) { return (n % 2 == 0); }

// Driver code
int main()
{
    int n ;

    cout << "Enter the number :: ";
    cin >> n;
    if (isEven(n))
        cout << endl<<"Even";
    else
        cout << endl<<"Odd";

    return 0;
}