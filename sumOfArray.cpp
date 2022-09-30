#include <iostream>
using namespace std;

int SumOfArray(int[], int);
int *nagativeToPositiveArray(int arr[], int size);
void displayResult(int result, string msg);
void displayResult(string msg);

int main()
{
    int arrayLength = 0;
    int arr[arrayLength];
    displayResult("Enter the size of array : ");
    cin >> arrayLength;
}

int SumOfArray(int arr[], int sizeOfArr)
{
    int sum = 0;
    int *positiveArr = nagativeToPositiveArray(arr, sizeOfArr);
    for (int i = 0; i < sizeOfArr; i++)
    {
        sum += positiveArr[i];
        // sum = sum + arr[i];
    }
    displayResult(sum, "Result = ");
    return sum;
}

int *nagativeToPositiveArray(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = arr[i] * (-1);
        }
    }
    return arr;
}

void displayResult(int r, string msg)
{
    cout << msg << r << endl;
}

void displayResult(string msg)
{
    cout << msg;
}
