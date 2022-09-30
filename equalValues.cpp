#include <iostream>
using namespace std;

int values(int a, int b, int c);

int main()
{
    int a, b, c, equal;
    cout << "\n enter the first no :";
    cin >> a;
    cout << "\n enter the second no :";
    cin >> b;
    cout << "\n enter the third no :";
    cin >> c;
    equal = values(a, b, c);
    return 0;
}

int values(int a, int b, int c)
{
    int equal;
    if (a == b)
    {
        cout << "equal";
    }
    else if (a == c)
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }
    return equal;
}
