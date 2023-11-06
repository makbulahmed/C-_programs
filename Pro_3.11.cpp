#include <iostream>
using namespace std;

class product {
    int product_id;
    string product_name;
    double unit_price;

public:
    void getData(); 
    void putData(); 
};

void product::getData() {
    cout << "Enter the product ID: ";
    cin >> product_id;
    cout << "Enter the product name: ";
    cin >> product_name;
    cout << "Enter the unit price: ";
    cin >> unit_price;
}

void product::putData() {
    cout << "Product ID: " << product_id << endl;
    cout << "Product name: " << product_name << endl;
    cout << "Unit price: " << unit_price << endl;
}

int main() {
    product p1, p2;

    cout << "Enter the details of the first product:\n";
    p1.getData();
    cout << "Enter the details of the second product:\n";
    p2.getData();

    cout << "The details of the first product are:\n";
    p1.putData();
    cout << "The details of the second product are:\n";
    p2.putData();

    return 0;
}