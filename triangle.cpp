# include <iostream>
using namespace std;

int main()

{ int choice = 0, i=0;
    cout<<"\n enter your choice";
    cin>>choice;

    for(i=1; i<=choice; i++) {
        for(int j=0; j < i; j++){
            cout<<"* ";
        } 
     cout<<endl;
    }
    
    return 0;

}