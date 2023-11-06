#include<iostream>
using namespace std;

class Max
{
	int num1, num2;

public:
	void input()
	{
		cout << "Enter the Value 1 :: " ;
		cin >> num1;
		cout << endl << "Enter the Value 2 :: " ;
		cin >> num2;
	}
	void Display()
	{
		cout << endl << "The number 1 :: " << num1 ;
		cout << endl << "The number 2 :: " << num2 ;
	}
	void largest()
	{
		if (num1 > num2)
		{
			cout << endl << "Number 1 is largest" ;
		}
		else if (num1 < num2)
		{
			cout << endl << "Number 2 is largest" ;
		}
		else
		{
			cout << endl << "Both values are equal" ;
		}
	}
};
int main()
{
	Max m;

	m.input();
	m.Display();
	m.largest();

	return 0;
}
