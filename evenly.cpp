# include <iostream>
using namespace std;

bool evenly(int x, int y); 

int main() {
    int x, y;
    cout<<"enter the first no :";
    cin>>x;
    cout<<"enter the second no :";
    cin>>y;
    if (evenly(x,y)) {
        cout<<"true :";
    } else {
        cout<<"false :";
    }
    return 0;

}

bool evenly(int x, int y) {
    if (x % y == 0) {
        return true;
    } else {
        return false;
    }
}