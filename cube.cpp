#include <iostream>
using namespace std;

bool cubes(int a, int b, int c);

int main()
{
    int a, b, c, cube;
    cout << "enter the first no :";
    cin >> a;
    cout << "enter the second no :";
    cin >> b;
    cout << "enter the third no :";
    cin >> c;
    cube = a * b * c;
    cubes(a, b, c);
    cout << cube;
    return 0;
}

bool cubes(int a, int b, int c)
{
    int cube;
    cube = a * b * c;
    return cube;
}
