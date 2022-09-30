# include <iostream>
using namespace std;

int main()
{
    int a, choice,i;
    cout<<"\n enter a number for table : ";
    cin>>a;
    cout<<"\n enter your choice : ";
    cin>>choice;
    for(i=1; i<=choice; i++)
    {
        cout<<a<<" x "<< i << " = "<<a*i<<endl;
    }
    return 0;
}
