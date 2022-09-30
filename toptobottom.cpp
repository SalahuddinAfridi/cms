// # include <iostream>
// using namespace std;
// int main()

// {
//     int n = 10;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j < n-i; j++){
//                cout<<" ";
//         }

//         for(int j = 1; j <= i; j++){
//              cout<<"* ";
//         cout<<endl;
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}