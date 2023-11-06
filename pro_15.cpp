#include<iostream>
using namespace std;

class square
{
private:
    int n, r;
    float n1, r1;
public:
    void input();
    void cal();
    void display();

};

inline void square::input()
{
    cout << "Enter an integer :: ";
    cin >> n;
    cout << endl<<"Enter a float :: ";
    cin >> n1;


}

inline void square::cal()
{
    r = n * n;
    r1 = n1 * n1;
}

inline void square::display()
{
    cout << endl<<"Square of integer [ " << n << " ] = " << r ;
    cout << endl<<"Square of float [ " << n1 << " ] = " << r1 ;
}

int main()
{
    square s;
    s.input();
    s.cal();
    s.display();

    return 0;
}