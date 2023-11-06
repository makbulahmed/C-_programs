#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream in("text.txt");

    ofstream f("file2.txt");

    while (!in.eof())
    {
        string text;

        getline(in, text);

        f << text << endl;
    }
    return 0;
}