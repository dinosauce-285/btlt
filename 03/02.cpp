#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cin >> n;

    for (float i = 2; i <= n; i++)
    {
        sum += (i / (i - 1));
    }
    cout << sum + 1;
}
