#include<iostream>
using namespace std;

// Driver code
int main()
{
    float P, R, T;

    cout << "Enter the Percentage ::";
    cin >> P;
    cout << "\nEnter the Rate ::";
    cin >> R;
    cout << "\nEnter the Time ::";
    cin >> T;

    float SI = (P * T * R) / 100;

    cout << "\nSimple Interest = " << SI;

    return 0;
}