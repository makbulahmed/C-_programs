#include <iostream>
using namespace std;

int main()
{
    int a, b, Swap;

    cout << "Enter A ::" << endl;
    cin >> a;
    cout << "Enter B ::" << endl;
    cin >> b;
    
    cout << "Before swapping." << endl;
    cout << "A :: " << a << ", B :: " << b << endl;

    Swap = a;
    a = b;
    b = Swap;

    cout << "\nAfter swapping." << endl;
    cout << "A :: " << a << ", B :: " << b << endl;

    return 0;
}