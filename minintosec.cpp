# include <iostream>
using namespace std;

int minintosec(int);

int main(){
    int mins,sec =0;

    cout<<"please enter the minutes : ";
    cin>>mins;
    sec = mins*60;
    cout<<"minutes"<<mins<<"seconds"<<sec<<endl;
    sec = minintosec(mins);
    return 0;
}

int minintosec(int mins){
    int sec;
    sec = mins*60;
    return sec;
}
