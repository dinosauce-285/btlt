#include <iostream>
using namespace std;

int main()
{

    int sotien;
    cin >> sotien;
    // doi tien nho hon 10
    if (sotien < 10)
    {
        // doi tien lon hon 5
        if (sotien >= 5)
        {

            cout << "so to 5: " << 1 << " ";
            int conlai = sotien - 5;
            if (conlai == 0)
            {
                return true;
            }
            // doi tien be hon 5

            if (1 < conlai && conlai <= 4)
            {
                cout << "so to 2: " << conlai / 2 << " ";
                if (conlai % 2 != 0)
                {
                    cout << "so to 1: " << 1 << " ";
                }
            }
            // tien tien la 1 dong
            if (conlai == 1)

            {
                cout << "so to 1: " << 1 << " ";
            }
        }
        // neu so tien nho hon 5 dong
        else
        {
            if (sotien > 1 && sotien <= 4)
            {
                // so to 2 dong
                cout << "so to 2: " << sotien / 2 << " ";
                if (sotien % 2 != 0)
                {
                    // so to 1 dong
                    cout << "so to 1: " << 1 << " ";
                }
            }
            if (sotien == 1)
            {
                cout << "so to 1: " << 1 << " ";
            }

            if (sotien < 1)
            {
                return true;
            }
            {
            }
        }
    }
    // neu so tien > 10
    else
    {
        int muoi = sotien / 10;
        cout << "so to 10:" << muoi << " ";
        // so tien con lai sau khi doi ra to 10 dong
        int conlai = sotien - muoi * 10;
        if (conlai == 5)
        {

            int nam = conlai / 5;
            cout << "so to 5:" << nam << " ";
        }
        if (conlai > 5)
        {
            int nam = conlai / 5;
            cout << "so to 5:" << nam << " ";
            // so tien con lai sau khi doi ra to 10 dong va 5 dong
            int tienle = conlai - nam * 5;
            if (tienle == 1)
            {
                cout << "so to 1:" << 1 << " ";
            }

            int hai = tienle / 2;
            if (hai == 0)
            {
                return 0;
            }
            else
            {
                cout << "so to 2:" << hai << " ";
            }
            if (tienle % 2 != 0)
            {
                int mot = tienle % 2;
                if (mot == 0)
                {
                    return true;
                }
                else
                {
                    cout << "so to 1:" << mot << " ";
                }
            }
        }
        // neu so tien con lai khong the doi ra 5 dong
        if (conlai < 5 && conlai >= 2)
        {
            int hai = conlai / 2;
            cout << "so to 2:" << hai << " ";
            if (conlai % 2 != 0)
            {
                cout << "so to 1:" << 1;
            }
        }
        if (conlai == 1)
        {
            cout << "so to 1:" << 1;
        }
    }
}
