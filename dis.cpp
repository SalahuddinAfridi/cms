#include <iostream>
using namespace std;

int discount(int price, int discount);

int main()
{
    int a, b, price;
    cout << "enter the original price :";
    cin >> a;
    cout << "enter the discount price :";
    cin >> b;
    // price = a - b;
    price = (50 * a) / 100;
    discount(a, b);
    return 0;
}

int discount(int a, int b)
{
    int price;
    // price = a - b;
    price = (50 * a) / 100;
    cout << "price :" << price << endl;
    return price;
}