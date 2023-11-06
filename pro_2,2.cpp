#include <iostream>
using namespace std;
class Sum
{
public:
    int Num;

    int Add(int Num);
   

};
int Sum::Add(int Num)
{
    return Num + Num;
}

int main()
{
    Sum s;

    s.Num;

    cout << "Enter the Value for Addition :: ";
    cin >> s.Num;

    cout << endl<<" Addition of " << s.Num<< " + " << s.Num <<" :: " << s.Add(s.Num);

    return 0;
}