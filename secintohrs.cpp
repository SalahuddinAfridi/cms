# include <iostream>
using namespace std;
int hrsintosec(float);

int main()
{
    float hrs,sec=0;
    cout<<"enter hours : ";
    cin>>hrs;
    sec = hrs* 3600;
    cout<<"hours"<<hrs<<"seconds"<<sec;
    sec = hrsintosec(hrs);
    return 0;
}

int hrsintosec(float hrs){
    float sec;
    sec = hrs*3600;
    return sec;
}