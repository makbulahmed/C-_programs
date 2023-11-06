#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[MAX_SIZE]; 
    int i, num;

    cout << "Enter size of the array :: ";
    cin >> num;

    cout << "Enter elements in array :: \n";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "\nAll negative elements in array are :: ";
    for (i = 0; i < num; i++)
    {
        if (arr[i] < 0)
        {
            cout <<", "<<arr[i];
        }
    }

    return 0;
}