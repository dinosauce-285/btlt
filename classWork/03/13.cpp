#include <iostream>
#include <string>
using namespace std;

int nam(float a, float b, float sa, float sb, int i);
int main()
{
 
    cout << nam(4000, 40 , 5000 , 20 , 0);
    
    return 0;
}
int nam(float a, float sa, float b, float sb, int i)
{
    while (a < b )
    {
        a += a*(sa/100);
        b += b*(sb/100);
        i++;
    }
    return i;
} 