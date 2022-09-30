# include <iostream>
using namespace std;

int reminder(int x, int y);

int main()
{
    int x,y,reminder;
    cout<<"enter the first no :";
    cin>>x;
    cout<<"enter the second no :";
    cin>>y;
    reminder = x/y;
    reminder = (x , y);
    cout<<reminder;
    return 0;
}

int reminder(int x, int y){
    int reminder;
    reminder = x/y;
    return reminder;
}