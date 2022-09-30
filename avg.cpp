#include <iostream>
using namespace std;

int average(int a, int b, int c);

int main()
{
    int a = 0, b = 0, c = 0, sum = 0;
    cout << "enter the first no ";
    cin >> a;
    cout << "enter the second no :";
    cin >> b;
    cout << "enter the third no :";
    cin >> c;
    sum = average(a, b, c);
    cout << sum;
    return 0;
}

int average(int a, int b, int c)
{
    int sum;
    sum = (a + b + c) / 3;
    return sum;
}
