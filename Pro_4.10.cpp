#include <iostream>
using namespace std;

class Base {
public:
};

class A {
public:
    A() { cout << "A Constructor" << endl; }

    int size;
};

class B : public A {
};

class C : public A {
public:
    C()
    {
        cout << "C Constructor" << endl;

    }
};

class D {
public:
    D()
    {
        cout << "D Constructor" << endl;

    }

private:
    A a;
};

int main()
{
    Base base;

    B b;
    C c;
    D d;

    return 0;
}