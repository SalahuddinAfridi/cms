#include <iostream>
using namespace std;

int multiple(int num, int length);

int main()
{
    int n, l, num, length, result;
    cout << "enter a number : ";
    cin >> n;
    cout << "enter a number for length : ";
    cin >> l;
    result = multiple(num, length);
    cout << result;
}

int multiple(int num, int length)
{
    int arr[length];
    int arr[num];
    for (int i = 0; i < length; i++)
    {
        arr[i] = num * i;
        cout << arr[i];
    }
    for (int j = 0; j < length; j++)
    {
        arr[length] = length * j;
        cout << arr[j];
    }
    return arr[length] << i * j;
}