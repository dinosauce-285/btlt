#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k = 6.67 * pow(10, -11);
    float m1, m2, d;
    cin >> m1 >> m2 >> d;
    cout << k * ((m1 * m2) / (d * d));
}