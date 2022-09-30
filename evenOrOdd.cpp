# include <iostream>
using namespace std;

int evenOrOdd(int x);

int main()
{
    int x = 0,even,odd;
    cout<<"enter a no :";
    cin>>x;
    evenOrOdd(x);

    return 0;
}

int evenOrOdd(int x) {
    int even,odd;
    if (x % 2 == 0) {
        cout<<" even ";
    } else {
        cout<<" odd ";
    }
    return 0;
}

