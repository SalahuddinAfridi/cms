#include <iostream>
using namespace std;

int Triangle(float, float);

int main()
{
    int base, height, Area;
    cout << "enter  the base :";
    cin >> base;
    cout << "enter the height :";
    cin >> height;
    Area = base * height;
    Area = Triangle(base, height);
    cout << Area;
    return 0;
}

int Triangle(float base, float height)
{
    int Area;
    Area = base * height;
    cout << Area;
    return Area;
}