#include <iostream>
using namespace std;

int main()
{
     int a = 5, b = 10, swap;
     cout << "before swapping " << endl;
     cout << " a = " << a << endl
          << " b = " << b << endl;
     swap = a;
     a = b;
     b = swap;
     cout << " after swapping " << endl;
     cout << " a = " << a << endl
          << " b = " << b << endl;
     return 0;
}
