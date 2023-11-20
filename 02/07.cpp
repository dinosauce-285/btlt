
#include <iostream>
#include <algorithm>
using namespace std;

main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int maximum = max({a, b, c});
    int minimum = min({a, b, c});
    cout << "max la " << maximum << " "
         << "min la " << minimum << endl;
    if (maximum == a && minimum == b)
    {
        cout << b << " " << c << " " << a;
    }
    if (maximum == a && minimum == c)
    {
        cout << c << " " << b << " " << a;
    }
    if (maximum == b && minimum == a)
    {
        cout << a << " " << c << " " << b;
    }
    if (maximum == b && minimum == c)
    {
        cout << c << " " << a << " " << b;
    }
    if (maximum == c && minimum == a)
    {
        cout << a << " " << b << " " << c;
    }
    if (maximum == c && minimum == b)
    {
        cout << b << " " << a << " " << c;
    }
}
