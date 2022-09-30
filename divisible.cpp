# include <iostream>
using namespace std;

bool divisible(int a);

int main() {
    int a;
    cout<<"enter a no :";
    cin>>a;
    if (divisible(a )) {
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}

bool divisible(int a) {
    cout<<a%5;
    if (a % 5 ==0) {
        return true;
    } else { 
        return false;
        }

}