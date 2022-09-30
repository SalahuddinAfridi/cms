# include <iostream>
using namespace std;

int main(){
    int x,y,sum;
    cout<<"enter the first no :";
    cin>>x;
    cout<<"enter the second nno :";
    cin>>y;
     sum = x+y;
     cout<<sum;
    if(sum < 100){
     cout<<"true";
    } else {
       cout<<"false";
    }
    return sum;
}
