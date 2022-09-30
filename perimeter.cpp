# include <iostream>
using namespace std;
int perimeter(int lenght, int width);

int main()
{
    int lenght, width,peri;
    cout<<"enter the lenght :";
    cin>>lenght;
    cout<<"enter the width :";
    cin>>width;
     peri = perimeter(lenght,width);
    cout<<peri;
    return 0;
}

int perimeter(int lenght , int width)
{
    int peri;
    peri = 2*(lenght+width);
    return peri;
}