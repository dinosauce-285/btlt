#include <iostream>
using namespace std;

int main()
{
    int n;
    while (n != 0)
    {
        cout << "MAY TINH DON GIAN" << endl;
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "0. Dung chuong trinh" << endl;
        cout << "Lua chon cua ban la: ";
        cin >> n;
        if (n == 0)
        {
            cout << "Ban da thoat chuong trinh";
            break;
        }
        int a, b;
        cout << "Moi nhap vao so thu nhat: ";
        cin >> a;
        cout << "Moi nhap vao so thu hai: ";
        cin >> b;
        if (n == 1)
        {
            cout << a + b << endl;
        }
        if (n == 2)
        {
            cout << a - b << endl;
        }
        if (n == 3)
        {
            cout << a * b << endl;
        }
        if (n == 4)
        {
            cout << 1.0 * a / b << endl;
        }
        
    }
}