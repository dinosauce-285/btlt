#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, delta;
    cin >> a >> b >>c ;
    delta = (b * b) - (4 * a * c);
    if (delta < 0)
    {
        cout << "vo nghiem";
    }
    if (delta == 0)
    {
        float nghiem = (-b) / (2 * a);
        cout << nghiem;
    }
    if (delta > 0)
    {
        float x1 = ((-b) + sqrt(delta)) / (2 * a);
        float x2 = ((-b) - sqrt(delta)) / (2 * a);
        cout << x1 << " " << x2 ;
    }
}