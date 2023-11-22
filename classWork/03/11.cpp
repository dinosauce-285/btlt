#include <iostream>
#include <string>
using namespace std;

int main()
{
    float salary = 0, K, n;
    cin >> salary >> K >> n;

    for (int i = 1; i <= n; i++)
    {
        salary += (salary * (K / 100));
    }
    cout << salary << endl;
    return 0;
}