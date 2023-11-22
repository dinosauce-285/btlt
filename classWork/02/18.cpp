#include <iostream>
using namespace std;

int main()
{
    float W, H;
    cout << "Nhap can nang: ";
    cin >> W;
    cout << "Nhap chieu cao: ";
    cin >> H;
    float bmi = W / (H * H);
    if (bmi < 18.5)
    {
        cout << "duoi chuan";
    }
    if (18.5 <= bmi && bmi < 25)
    {
        cout << "chuan";
    }
    if (25 <= bmi && bmi < 30)
    {
        cout << "thua can";
    }
    if (30 <= bmi && bmi < 40)
    {
        cout << "beo - nen giam can";
    }
    if (bmi > 40)
    {
        cout << "rat beo - can giam can ngay";
    }
}
