#include<iostream>
using namespace std;

int x = 20; 

int main()
{
	int x = 10;
	cout << "Value of global x :: " << ::x;
	cout <<endl<< "Value of local x :: " << x;
	return 0;
}