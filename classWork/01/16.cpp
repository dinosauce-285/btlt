#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    int a = number1 / 100;
    int b = (number1 - (a * 100)) / 10;
    int c = number1 - (a * 100) - (b * 10);

    int d = number2 / 100;
    int e = (number2 - (d * 100)) / 10;
    int f = number2 - (d * 100) - (e * 10);
    cout << "       " << number1 << endl;
    cout << "x" << "      " << number2 << endl;
    cout << "------------" << endl;
    cout << "      " << f * number1 << endl;
    cout << "     " << e * number1 << endl;
    cout << "    " << d * number1 << endl;
    cout << "------------" << endl;
    cout << "      " << number1 * number2;
}