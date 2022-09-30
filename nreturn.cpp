# include <iostream>
using namespace std;

int negative(int a);

int main() {
    int a;
    cout<<"enter a no :";
    cin>>a;
      
        cout<<negative(a);
    
}

int negative(int a) {
    if (a < 0 ) {
        return a;
    } else {
        return (a*-1);
    }
}
