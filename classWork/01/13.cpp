#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a;
    cin >> a;
    float b = (1000 * a) / 20;
    //them 1 bao neu so gao khong chia het 20 
    if (b > round(b))
    {
        b = round(b) + 1;
        cout << "so bao gao : " << b << endl;
    }
    else
    {
        b = round(b);
        cout << "so bao gao : " << b << endl;
    }
}