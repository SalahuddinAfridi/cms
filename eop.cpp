#include <iostream>
using namespace std;

void prime(int n);
bool findPrime(int n);

int main()
{
    int n = 0;

    cout << "enter a number :";
    cin >> n;
    prime(n);
    return 0;
}

void prime(int n)
{

    if (n == 0)
    {
        cout << "not even, odd and prime :";
    }

    else if (n != 1)
    {
        if (findPrime(n))
        {
            cout << "prime number \n";
        }
    }

    if (n % 2 == 0)
    {
        cout << "even number:";
    }
    else
    {
        cout << "odd number :";
    }
}
bool findPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << false;
        }
    }
    return true;
}