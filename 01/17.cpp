#include <iostream>
using namespace std;

int main()
{
    float W, H;
    cout << "Nhap can nang: ";
    cin >> W;
    cout << "Nhap chieu cao: ";
    cin >> H;
    cout << "BMI: " << W / (H * H);
}
