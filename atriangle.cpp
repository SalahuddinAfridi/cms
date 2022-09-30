# include <iostream>
using namespace std;
int triangle(float,float);

int main(){
    float base,height,area;

    cout<<"enter your base :";
    cin>>base;
    cout<<"enter your height :";
    cin>>height;
    area = triangle(base,height);
    cout<<area;
    return 0;
}

int triangle(float base, float height){
    float area;
    area = base*height/2;
    return area;
}