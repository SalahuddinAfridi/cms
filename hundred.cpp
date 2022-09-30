# include <iostream>
using namespace std;

bool divisible(int a);

int main() {
    int x;
    cout<<"enter a divisible no :";
    cin>>x;
    if (divisible(x)) {
        cout<<"true:";
    } else {
        cout<<"false :";
    }
    return 0;
}

bool divisible( int x) {
    if (x % 100 ==0) {
        return true;
    } else {
        return false;
    }
}