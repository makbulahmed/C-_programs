#include <iostream>
using namespace std;

class Product {
public:
    int manufacture_year;
    int expiry_year;

    Product(int m, int e) {
        manufacture_year = m;
        expiry_year = e;
    }
};

int diff_year(Product p) {
    return p.expiry_year - p.manufacture_year;
}

int main() {
    Product p1(2020, 2023);

    cout << "The difference between manufacture year and expiry year is " << diff_year(p1) << endl;

    return 0;
}