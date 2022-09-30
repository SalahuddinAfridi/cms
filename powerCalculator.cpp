#include <iostream>
using namespace std;

int circutPower(int voltage, int currentr);

int main()
{
    int voltage, current, power;
    cout << "enter the voltage :";
    cin >> voltage;
    cout << "enter the current :";
    cin >> current;
    power = circutPower(voltage, current);
    cout << power;
    return 0;
}

int circutPower(int voltage, int current)
{
    int power;
    power = voltage * current;
    return power;
}