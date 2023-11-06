#include <iostream>
using namespace std;

int main()
{
	int a, i = 0;
	cout << " Input a number: ";
	cin >> a;
	for (i = 1; i <= 10; i++)
	{
		cout <<endl<< a << " x " << i << " = " << a * i;
	}

}