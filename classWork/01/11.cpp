#include <iostream>
using namespace std; 

 int main (){
    int a,gio,phut,giay ; 
    cin >> a; 
    gio =  a/3600;
    phut =  a%3600/60;
    giay = a - gio*3600 - phut*60;
    cout << gio << ":" << phut << ":" << giay;
 
    
 }