#include <iostream>
using namespace std;

int AreaOFReactangle(int w, int l);

int main()
{
    int width, length, Area = 0;
    cout << "enter the width :";
    cin >> width;
    cout << "enter the length :";
    cin >> length;
    Area = (width * length);
    AreaOFReactangle(width, length);
    return 0;
}

int AreaOFReactangle(int w, int l)
{
    int width, length, Area;
    Area = w * l;
    cout << Area;
    return Area;
}
