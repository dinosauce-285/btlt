#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        cout << "nam nhuan";
        int m;
        cin >> m;
        if (m == 2)
        {
            cout << "co 29 ngay";
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            cout << "co 31 ngay";
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            cout << "co 30 ngay";
        }
    }
    else
    {
        cout << "ko nhuan";
        int m;
        cin >> m;
        if (m == 2)
        {
            cout << "co 28 ngay";
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            cout << "co 31 ngay";
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            cout << "co 30 ngay";
        }
    }
}
