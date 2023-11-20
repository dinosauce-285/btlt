#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> daySo = {};
    int x, k, i = -1;
    cin >> x;
    while (x != 1)
    {
        i++;
        daySo.push_back(x);
        if (x % 2 != 0)
        {
            x = 3 * daySo[i] + 1;
        }
        else if (x % 2 == 0)
        {
            x = daySo[i] / 2;
        }
        
    }
    cout << i+1 << endl;
    daySo.push_back(1);
    for (int i = 0; i < daySo.size(); i++)
    {
        cout << daySo[i] << " ";
    }
}