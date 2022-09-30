#include <iostream>
using namespace std;

int main()
{
    int arr[10], i;
    cout << " enter any 10 numbers :" << endl;
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "even numbers are :";
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}