# include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,sum;
    cout<<"\n enter your first number :";
    cin>> a;
    cout<<"\n enter your second number :";
    cin>> b;
    cout<<"\n enter your third number :";
    cin>> c;
    cout<<"\n enter your fourth number :";
    cin>> d;

    a = 10;
    b = 15;
    c = 13;
    d = 9;

    sum = a+b+c+d/4;
    {
        cout<<sum<<endl;
    }
    return 0;
}