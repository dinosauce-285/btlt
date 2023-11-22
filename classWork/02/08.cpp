
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "tam giac"
             << " ";
    }
    else
    {
        cout << "khong la tam giac"
             << " ";
        exit(0);
    }

    if ((a == b && b != c) || (b == c && c != a) || (a == c && c != b))
    {
        cout << "tam giac can";
    }

    else if (a * a == (b * b) + (c * c) || b * b == (a * a) + (c * c) || c * c == (a * a) + (b * b))
    {
        cout << "tam giac vuong";
    }

    else if (a == b && b == c)
    {
        cout << "tam giac deu";
    }
    else
    {
        cout << "tam giac thuong";
    }
}