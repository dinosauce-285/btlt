#include <iostream>
#include <iomanip>

bool checkFull(char a[50][50]);
void setData(char a[50][50]);
void showData(char a[50][50]);
void flightClass(char a[50][50], int k);

using namespace std;

int main()
{

    char seat[50][50];
    setData(seat);

    while (checkFull(seat) == 0)
    {
        int hangGhe;
        cout << "1. HANG NHAT \n2. THUONG GIA \n3. PHO THONG \n";
        cin >> hangGhe;

        if (checkFull(seat) == 1)
        {
            cout << "het cho roi";
            break;
        }
        else
            flightClass(seat, hangGhe);
        showData(seat);
    }
}

bool checkFull(char a[50][50])
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a[i][j] == '*')
            {
                return 0;
            }
        }
    }
    return 1;
}
void setData(char a[50][50])
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            a[i][j] = '*';
        }
    }
}
void showData(char a[50][50])
{
    cout << "            " << 'A' << "     " << 'B' << "     " << 'C' << "     " << 'D' << "     " << 'E' << "     " << 'F' << endl;
    for (int i = 0; i < 13; i++)
    {
        if (i + 1 < 10)
            cout << "Row " << i + 1 << setw(8) << setfill(' ');
        else
            cout << "Row " << i + 1 << setw(7) << setfill(' ');

        for (int j = 0; j < 6; j++)
        {
            cout << a[i][j] << "     ";
        }
        cout << endl;
    }
}
void flightClass(char a[50][50], int k)
{
    char hangGhe;
    int soGhe;
    cout << "chon hang ghe" << endl;
    cin >> hangGhe;
    cout << "chon so ghe" << endl;
    cin >> soGhe;

    if (k == 1)
    {
        int hangGheNum = static_cast<int>(hangGhe) - 65;
        a[soGhe - 1][hangGheNum] = 'X';
    }
    if (k == 2)
    {
        int hangGheNum = static_cast<int>(hangGhe) - 65;
        a[soGhe - 1][hangGheNum] = 'X';
    }
    if (k == 3)
    {
        int hangGheNum = static_cast<int>(hangGhe) - 65;
        a[soGhe - 1][hangGheNum] = 'X';
    }
}
