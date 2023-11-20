#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "nhap loai tktk ";
    string customerType;
    getline(cin, customerType);
    float soDuMin, soDuThang;
    cout << "nhap so du min va so du thang ";
    cin >> soDuMin >> soDuThang;

    if (customerType == "t")
    {
        if (soDuThang < soDuMin)
        {
            cout << "dong phi 10$";
        }
        else
        {
            cout << soDuThang + (0.04 * soDuThang) << "$";
        }
    }
    if (customerType == "v")
    {
        if (soDuThang < soDuMin)
        {
            cout << "dong phi 25$";
        }
        else
        {
            if ((soDuThang - soDuMin) >= 5000)
            {
                cout << soDuThang + (0.03 * soDuThang) << "$";
            }
            else
            {
                cout << soDuThang + (0.05 * soDuThang) << "$";
            }
        }
    }
}
