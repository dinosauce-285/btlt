#include <iostream>
using namespace std;

int main()
{
    int km; 
    cin >> km ;
    if (km ==1)
    {
        cout << 15 <<" dong";
    }
    if (km>=2 && km<6)
    {
       float money = 15+ ((km-1)*13.5);
    cout << money << " dong";
    }
    if(km >=6)
    {
float money = 15 + (4*13.5)+ (km-5)*11;
cout << money << " dong";
    }
    if (km >120)
    {
      float money = 15 + (4*13.5)+ (km-5)*11;
      float discountedMoney = money - (money*0.1);
      cout << discountedMoney << " dong";
    }
    
    
}