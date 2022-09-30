# include <iostream>
using namespace std;

bool findTen(int a, int b);

int main() {
    int a,b,sum;
    cout<<"enter the first no :";
    cin>>a;
    cout<<"enter the second no :";
    cin>>b;
     if (findTen(a, b)) {
        cout<<"TRUE";
    } else {
        cout<<"\nFALSE";
    }

    return 0;
}



bool findTen(int a, int b) {
  if(a==10 || b==10 || a+b == 10){
    return true;
  }
    return false;
}