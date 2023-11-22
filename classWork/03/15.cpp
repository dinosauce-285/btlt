#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h = 1;
    vector<int> height = {};
    while (h != 0)
    {
        cin >> h;
        height.push_back(h);
    }
    int max = height[0];
    int min = height[0];
    if (h == 0)
    {
        for (int i = 0; i < height.size() - 1 ; i++)
        {
            if (max <= height[i])
            {
                max = height[i];
            }
            if (min >= height[i])
            {
                min = height[i];
            }
        }
        cout << max << " " << min;
    }
}