#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char name[] = "ok ok ok";
    int count = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        count += (name[i] == ' ');
    }
    
    cout << count + 1;
}

