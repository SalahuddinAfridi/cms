# include <iostream>
using namespace std;

int main()

{
    int marks;
    cout<<"\n please enter your marks";
    cin>>marks;
    {
        if(marks > 80)
        cout<<"\n you are passed and your grade is A+";

        if(marks > 70)
        cout<<"\n you are passed and your grade is B+";

        if (marks > 60)
        cout<<"\n you are  passed and your grade is C+";

        if (marks > 50)
        cout<<"\n you got passing marks amd youe grade is D+";

        if(marks < 50)
        cout<<"\n your are failed";

    }
     return 0;

}