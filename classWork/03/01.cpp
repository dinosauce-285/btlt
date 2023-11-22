#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> fourAndFive = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0 && i >= 4)
        {
            fourAndFive.push_back(i);
        }
        if (i % 5 != 0 && i >= 5)
        {
            fourAndFive.push_back(i);
        }
    }
    int sum;
    for (int i = 0; i < fourAndFive.size(); i++)
    {

        sum = sum + fourAndFive[i];
    }
    cout << sum;
}