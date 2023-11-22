#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> time;
    int n;
    float t;
    cout << "so van dong vien: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "nhap thoi gian chay cua vdv" << i << ": ";
        cin >> t;
        time.push_back(t);
    }
    float timesum = 0;

    for (int i = 0; i < time.size(); i++)
    {
        timesum += time[i];
    }
    cout << timesum;
}