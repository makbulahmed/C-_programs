#include <iostream>                        
using namespace std;

int main() {
    float celsius;
    float fahrenheit;

    cout << "Enter Celsius temperature: ";
    cin >> celsius;
    fahrenheit = ((celsius * 9) / 5) + 32;
    cout << "Fahrenheit = " << fahrenheit << endl;

    return 0;
}
