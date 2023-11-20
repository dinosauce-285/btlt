#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x <= 9)
    {
        cout << x;
    }
    if (x > 9)
    {
        int n{x - 10 + 'A'};
        cout << static_cast<char>(n) << endl;
    }
}
