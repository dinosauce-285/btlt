#include <iostream>
using namespace std;

int main()
{
    int velocity;
    cin >> velocity;
    if (velocity <= 60)
    {
        cout << "toc do cho phep";
    }
    if (velocity > 65 && velocity <= 70)
    {
        cout << "muc phat la: 0.7tr";
    }
    if (velocity > 70 && velocity <= 80)
    {
        cout << "muc phat la: 2.5tr";
    }
    if (velocity > 80 && velocity <= 95)
    {
        cout << "muc phat la: 5.5tr";
    }
    if (velocity > 95)
    {
        cout << "muc phat la: 7.5tr";
    }
}