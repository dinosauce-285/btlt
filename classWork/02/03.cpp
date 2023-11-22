#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a;

    b = sqrt(a);
    if (ceil(b) == floor(b))
    {
        cout << "so chinh phuong";
    }
    else
    {
        cout << "ko la so chinh phuong";
    }
}