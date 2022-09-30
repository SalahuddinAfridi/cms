# include <iostream>
using namespace std;

bool seven(int a);

int main() {
    int a;
    cout<<"enter a no :";
    cin>>a;
    if (seven(a)) {
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}

bool seven(int a) {
    if (a == 7){
        return true;
    } else {
        return false;
    }
}