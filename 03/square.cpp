#include "stdio.h"
#include "iostream"
using namespace std;

template<typename T>
class Square
{
private:L
    T side;

public:
    Square(T side)
    {
        this->side = side;
    }

    T calcArea()
    {
        return side * side;
    }
};

int main()
{
    double sideLength = 5.0; // Example Side Length
    Square<double>(sideLength);
    double area = square.calcArea();
    printf("Area of square %.2f\n", area);
    cout << "Area of the square: " << area << endl;

    int side = 5;
    Square<int> s(side);
    int a = s.calcArea();
    printf("%d", a);
    
    return 0;
}