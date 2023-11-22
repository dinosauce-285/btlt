#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "snt";
            exit(0);
        }
        else
        {
            cout << "k snt ";
            exit(0);
        }
    }
}