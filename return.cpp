# include <iostream>
using namespace std;

bool cpp(int num1,int num2);

bool returnNo(int num1, int num2);

int main() {
    int num1=0,num2=0;
    cout<<"enter the first no :";
    cin>>num1;
    cout<<"enter the second no :";
    cin>>num2;
    if(cpp(num1,num2)){
        cout<<"true";
    } else {
       cout<<"false";
    }
}

bool returnNo(int num1, int num2) {
    return num1==num2 ? true:false;
}
bool cpp(int num1, int num2) {
    if(num1==num2){
        return true;
    } else {
        return false;
    }
}