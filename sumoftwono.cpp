# include <iostream>
using namespace std;
// function prototype
int sumTwoNumbers(int,int);
int main()
{
    int sum;
    int a, b;
    cout<<" enter the firdt number : ";
    cin>>a;
    cout<<" enter the second number : ";
    cin>>b;
    // function call
  sum = sumTwoNumbers(a,b);
  cout<<"the sum of two numbers is : "<<sum;
    return 0;
}

int sumTwoNumbers(int firstNumber, int secondNumber){
    int sum;
    sum=firstNumber+secondNumber;
    return sum;
}