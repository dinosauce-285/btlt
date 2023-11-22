#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> uoc = {};
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            uoc.push_back(i);
        }
    }
    cout << "co " << uoc.size() << " uoc" << endl;
    ;
    for (int i = 0; i < uoc.size(); i++)
    {
        cout << uoc[i] << endl;
    }
    int sum = 0;
    for (int i = 0; i < uoc.size(); i++)
    {
        sum += uoc[i];
    }
    cout << sum;
}