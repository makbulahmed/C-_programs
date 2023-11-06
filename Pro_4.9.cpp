#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) {
        value = v;
    }
    friend int add(Number n1, Number n2);
};

int add(Number n1, Number n2) {
    return n1.value + n2.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    cout << "The addition of two numbers is: " << add(num1, num2) << endl;
    return 0;
}
