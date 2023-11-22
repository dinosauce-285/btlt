#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> daySo = {};
    int a = 0, b = 1;
    for (int i = 0; i <= 10e5; i++)
    {
        //tao day fbnc
        daySo.push_back(a);
        a += b;
        daySo.push_back(b);
        b += a;
    }
    //xuat ra so thu n trong day
    int i = 0;
    cin >> i;
    cout << daySo[i] << endl;
}
