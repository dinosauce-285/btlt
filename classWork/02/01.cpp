#include <iostream>
using namespace std;

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    if (h < 0 || h > 24)
    {
        cout << "gio sai";
    }
    else
    {
        cout << h << " ";
    }
    if (m < 0 || m > 60)
    {
        cout << "phut sai";
    }
    else
    {
        cout << m << " ";
    }
    if (s < 0 || s > 60)
    {
        cout << "giay sai";
    }
    else
    {
        cout << s << " ";
    }
}
