# include <iostream>
using namespace std;

int age(int years, int days);

int main() {
    int years,days;
    cout<<"enter the years :";
    cin>>years;
    days = years *365;
    days = age(years, days);
    cout<<days;
    return 0;
}

int age(int years, int days) {
   days = years *365;
   return days;
}