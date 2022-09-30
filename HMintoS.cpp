#include <iostream>
using namespace std;

int hmintos(int hours, int minutes);

int main()
{
    int hrs, mins, sec = 0;
    cout << "enter the hours :";
    cin >> hrs;
    cout << "enter the minutes :";
    cin >> mins;
    sec = hmintos(hrs, mins);
    cout << "Seconds : " << sec;
    return 0;
}

int hmintos(int hours, int minutes)
{
    int sec = (hours * 60 * 60) + (minutes * 60);
    return sec;
}
