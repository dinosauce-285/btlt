#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n, sumPhieu = 0;
    cout << "nhap so ucv " << endl;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int phieu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> phieu[i];
        sumPhieu += phieu[i];
    }
    cout << left << setw(20) << "Candidate" << left << setw(20) << "Votes"
         << "Received % of Total Votes" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(20) << a[i] << left << setw(20) << phieu[i] << left << setw(20) << 100.0 * phieu[i] / sumPhieu << endl;
    }
    cout << left << setw(20) << "Total" << sumPhieu << endl;
    int max = 0;
    string tenUcv;
    for (int i = 0; i < n; i++)
    {
        if (max < phieu[i])
        {
            max = phieu[i];
            tenUcv = a[i];
        }
    }
    cout << "The Winner of the Election is " << tenUcv;
    return 0;
}
