#include <iostream>
using namespace std;

int main() {
	float radius, area_circle,PI = 3.14159265358979323846;

	// take radius as input
	cout << "Enter the radius of circle: ";
	cin >> radius;

	area_circle = PI * radius * radius;
	cout << "Area of circle: " << area_circle << endl;

	return 0;
}