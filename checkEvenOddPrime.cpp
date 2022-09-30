#include <iostream>
using namespace std;

int mix(int a, int b, int c);

int main()
{
    int a = 0, b = 0, c = 0, odd, even, prime;
    cout << "enter the first no : ";
    cin >> a;
    cout << "enter the second no : ";
    cin >> b;
    cout << "enter the third no : ";
    cin >> c;
    mix(a, b, c);
    return 0;
}

int mix(int a, int b, int c)
{
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    {
        if (a % 2 == 0)
        {
            cout << a << " is even " << endl;
        }
        else if (b % 2 == 0)
        {
            cout << b << " is even " << endl;
        }
        else if (c % 2 == 0)
        {
            cout << c << " is even " << endl;
        }
        // else
        // {
        //     cout << " the number is negative please enter a number greater than zero ";
        // }
    }
    if (a % 2 == 0 && a % 3 == 0 || b % 2 == 0 && b % 3 == 0 || c % 2 == 0 && c % 3 == 0)
    {
        if (a % 3 == 0)
        {
            cout << a << " is odd " << endl;
        }
        else if (a % 3 == 0)
        {
            cout << b << " is odd  " << endl;
        }
        else if (a % 3 == 0)
        {
            cout << c << " is odd " << endl;
        }
        // else
        // {
        //     cout << " the number is negative please enter a number greater than zero ";
        // }
    }
    if (a % 1 == 0 && a % a == 0 || b % 1 == 0 && b % b == 0 || c % 1 == 0 && c % c == 0)
    {
        if (a % 1 == 0 && a % a == 0)
        {
            cout << a << " is prime " << endl;
        }
        else if (b % 1 == 0 && b % b == 0)
        {
            cout << b << " is prime " << endl;
        }
        else if (c % 1 == 0 && c % c == 0)
        {
            cout << c << " is prime " << endl;
        }
        // else
        // {
        //     cout << " the number is negative please enter a number greater than zero ";
        // }
    }
    return 0;
}