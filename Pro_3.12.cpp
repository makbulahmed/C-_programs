#include<iostream>
using namespace std;

class item 
{
    int number; 
    float cost; 

public:
    void getdata(); 
    void displaydata(); 
};

void item::getdata() {
    cout << "Enter the Number ::";
    cin >> number;
    cout << "Enter the Cost ::";
    cin >> cost;
}

void item::displaydata() {
    cout << "Number: " << number << endl; 
    cout << "Cost: " << cost << endl; 
}

int main() {
    item i1; 
    i1.getdata(); 
    i1.displaydata();
    return 0; 
}