#include <iostream>
using namespace std;

void findEOP(int n);
bool findPrime(int n);

int main()
{
    int n = 0;

    cout << "Enter a Number: ";
    cin >> n;
    findEOP(n);
    return 0;
}

void findEOP(int n)
{

    if (n == 0)
    {
        cout << "Not even, odd and prime";
    }

    else if (n != 1)
    {
        if (findPrime(n))
        {
            cout << "Prime Number\n";
        }
    }

    if (n % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
}

bool findPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}