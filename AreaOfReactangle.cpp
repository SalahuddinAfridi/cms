#include <iostream>
using namespace std;

int AreaOfReactangle(int w, int l);

int main()
{
    int width, length, Area;
    cout << "enter the width :";
    cin >> width;
    cout << "enter the length :";
    cin >> length;
    Area = (width * length);
    AreaOfReactangle(width, length);
    return 0;
}

int AreaOfReactangle(int w, int l)
{
    int width, length, Area;
    Area = w * l;
    cout << Area;
    return Area;
}
