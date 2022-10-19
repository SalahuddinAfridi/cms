#include <iostream>
using namespace std;

int evenOdd(int length);

int main()
{
    int a, sum;
    cout << "enter the numbers for even  no 1-6 :";
    cin >> a;
    sum = evenOdd(a);
    return 0;
}

int evenOdd(int length)
{
    int odd = 0, even = 0;

    cout << "the length is : " << length << endl;
    int i, a = 0;
    int sum = 0;
    int arr[length];
    for (i = 0; i < length; i++)
    // arr[i + 1] = arr[i];
    {
        cout << "enter number :" << 1 + i << " : " << endl;
        cin >> arr[i];
        // arr[i + 1] = arr[i];
        // cout << "sum of even and odd numbers :" << sum;
    }
    for (int j = 0; j < i; j++)
    {
        sum = even + (1 + i);
        sum = odd + (1 + i);
        cout << "sum of even numbers:" << 1 + i << even << endl;
        cout << "sum of odd numbers:" << 1 + i << odd;

        if (arr[j] % 2 == 0)
        {
            cout << "the number is even \n";
            arr[i + 1] = arr[i];
            // cout << "sum of even numbers:" << 1 + i << sum << endl;
        }
        else
        {
            cout << "the number is odd \n";
            // cout << "sum of odd numbers:" << 1 + i << sum;
        }
    }
    return sum;
    return 0;
}
