# include <iostream>
using namespace std;

int feets(int feets);

int main() {
    int inches, feet;
    cout<<"enter feet :";
    cin>>feet;
    inches = feets(  inches);
    inches = feet *12;
    cout<<inches;
    return inches;

}

int feets(int feets) {
    int inches;
   inches = feets *12;
    return 0;
}