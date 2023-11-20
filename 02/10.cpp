#include <iostream>
using namespace std;

int main()
{
    int kwh, oldNum, newNum;

    cin >> oldNum >> newNum;
    kwh = newNum - oldNum;
    if (kwh <= 100)
    {
        int money = kwh * 1000;
        cout << money << " dong";
    }
    if (kwh > 100 && kwh <= 150)
    {
        int money = 1000 * 100 + ((kwh - 100) * 1200);
        cout << money << " dong";
    }
    if (kwh > 150 && kwh < 200)
    {
        int money = 1000 * 100 + (50 * 1200) + ((kwh - 150) * 2000);
        cout << money << " dong";
    }
    if (kwh > 200)
    {
        int money = 1000 * 100 + (50 * 1200) + (50 * 2000) + ((kwh - 200) * 2500);
        cout << money << " dong";
    }
}