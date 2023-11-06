#include <cmath>
#include <iostream>

class shape
{
public:

    int Height = 2, Base = 3;

public:
  
    void displayArea()
    {
        double area = Height * Base;
        std::cout << " \n Area Triangle :: " << area<<std::endl;
    }
};



int main()
{
    shape s;
        s.displayArea();

}