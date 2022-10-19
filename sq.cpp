#include <iostream>
using namespace std;

int square(int);

int main()
{
    int x = 0, sq;
    cout << "enter any number :";
    cin >> x;

    // here in square function x and y act as parameters
    sq = square(x);
    cout << "square is : " << sq;
    return 0;
}
// yahan is square(int a) me jo "a" hai wo argument hai or is " a " wo  value hai jo hum ne upar main me square function me " x " pass ki hai
int square(int a)
{
    int sq;
    sq = a * a;
    return sq;
}
