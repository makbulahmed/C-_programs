#include <iostream> 
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n ;

    cout << "Enter teh value ::";
    cin >> n;
    cout << fib(n);
    getchar();
    return 0;
}