#include<iostream>
using namespace std;

void func2(int& num)
{
    int num ;
    int a;
    int b;

    num = a + b;

}

int main() {
    int a = 5;
    int b = 10;
    int num = a + b;

    func2(num);

    cout << "Total ::" << num;

    return 0;
}