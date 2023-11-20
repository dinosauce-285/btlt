#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> binaryReverse = {};
    int n, soDu;
    cin >> n;
    do
    {
        soDu = n % 2;
        n = n / 2;
        binaryReverse.push_back(soDu);
        
    } while (n > 0);
    int a = binaryReverse.size();
    for (int i = a - 1; i >= 0; i--)
    {
        cout << binaryReverse[i];
    }
    return 0;
}