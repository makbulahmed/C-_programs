#include<iostream>
using namespace std;

int main()
{
    double p, r, t;

    cout << "Enter the principal ::  ";
    cin >> p;
    cout << "Enter the rate :: ";
    cin >> r;
    cout << "Enter the time :: ";
    cin >> t;


    double A = p * (pow((1 + r / 100), t));
    double CI = A - p;

    cout << "Compound interest is " << CI;

    return 0;
}