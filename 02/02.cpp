#include <iostream>
using namespace std;

int main()
{
    float t, l, h;
    cin >> t >> l >> h;

    if (t < 4 || l < 4 || h < 4)
    {
        cout << "truot";
    }
    else
    {
        float sum = t + l + h;
        if (sum >= 15)
        {
            cout << "dau";
        }
        else
        {
            cout << "truot";
        }
    }
    if ( t>5 && l >5 && h >5)
    {
        cout << "hoc deu cac mon";
    }
    if (t>5|| l >5|| h >5)
    {
        cout <<"hoc chua deu cac mon";
    }
    else {
        cout << "thi hong";
    }
    
    
}