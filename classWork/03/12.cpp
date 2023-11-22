#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ga, cho;
    for (ga = 1; ga <= 36; ga++)
    {
        for (cho = 1; cho <= 36; cho++)
        {
            if ((ga + cho == 36) && ((2*ga) + (4*cho) == 100))
            {
                cout << "ga la " << ga << " con" << ", " << "cho la " << cho << " con" << endl;
            }
            
        }
        
    }
    int d, n, g;
    for (d = 1; d <= 100; d++)
    {
        for (n = 1; n <= 100; n++)
        {
            for (g = 1; g <= 100; g++)
            {
                if ((d + n+ g == 100) && (5*d + 3*n + (1.0*1/3)*g == 100))
                {
                    cout << "so trau dung " << d << ", " << "so trau nam " << n << ", " << "so trau gia " << g << endl; 
                }
                
            }
            
        }
        
    }
    
    
    return 0;
}