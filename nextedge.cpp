# include <iostream>
using namespace std;

int triangleEdge(int side1, int side2);

int main()
{
    int lenght,edges, side1, side2;
    cout<<"enter the lenght of the sides :";
    cin>>lenght;
    cout<<"enter side1 :";
    cin>>side1;
    cout<<"enter side2 :";
    cin>>side2;
    edges = (side1 + side2) -1;
    cout<<edges;
    return 0;
 
}
int  triangleEdge(int side1, int side2){
    int edges;
    edges = (side1 + side2) - 1;
    return edges;
}