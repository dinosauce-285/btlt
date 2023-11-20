#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int phut, giay;
    cin >> phut >> giay;
    for (phut; phut >= 0; phut--)
    {

        for (giay; giay >= 0; giay--)
        {   
            cout << setw(2) << setfill('0') << phut << " : ";
            cout << setw(2) << setfill('0') << giay << " tich tac" << endl;

            if (giay == 0 && phut != 0)
            {
                phut -= 1;
                giay = 60;
            }
            if (giay == 1 && phut == 0)
            {
                break;
            }
            

            
        }
        cout << "00 : 00 reng";
    }
}