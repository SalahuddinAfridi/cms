# include <iostream>
using namespace std;

bool equalNo(int num1);

int main() {
    int choice = 0;
    cout<<"enter your choice :";
    cin>>choice;
    if(equalNo(choice)){
        cout<<"True";
    } else {
        cout<<"False";
    }
}

bool equalNo(int x) {
   
    return x <= 0 ? true : false;
}