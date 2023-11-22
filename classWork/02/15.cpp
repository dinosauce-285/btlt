#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "nhap dau cua phep tinh: ";
    string dau;
    getline(cin, dau);
    int a, b;
    cin >> a >> b;
    if (dau == "+")
    {
        cout << a + b;
    }
    if (dau == "-")
    {
        cout << a - b;
    }
    if (dau == "*")
    {
        cout << a * b;
    }
    if (dau == "/")
    {
        cout << a / b;
    }
    if (dau == "%")
    {
        cout << a % b;
    }
}