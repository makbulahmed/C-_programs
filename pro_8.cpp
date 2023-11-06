#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float centimeter, meter, kilometer;

	cout << "Please Enter the Length in Centimeters (cm)  =  ";
	cin >> centimeter;

	meter = centimeter / 100.0;
	kilometer = centimeter / 100000.0;

	cout <<endl<<setw(25)<<setfill('.') << "Length in Meters :: " << meter;
	cout <<endl<<setw(25)<<setfill('.') <<"Length in Kilometers :: " <<setprecision(10)<< kilometer;
	cout <<endl<<setw(25)<< "Length in Centimeters :: "<< centimeter;

	return 0;
}