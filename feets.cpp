# include <iostream>
using namespace std;

int inche(int inches);

int main() {
    int inches, feets;
    cout<<"enter inches :";
    cin>>inches;
    feets = inche( inches );
    feets = inches / 12;
    cout<<feets;
    return feets;
}

int inche( int inches) {
    int feets;
    feets = inches / 12;
    return 0;
}