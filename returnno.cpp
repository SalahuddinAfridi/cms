# include <iostream>
using namespace std;
 int returnNo (int);

int main(){
    int a;
    int result;

    cout<<"enter a number : ";
    cin>>a;
    result = returnNo(a);
    cout<<"result : "<<result;
    return 0;
}

int returnNo(int a){
   int result = a+1;
    return result;
}