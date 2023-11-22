#include <iostream>
#include <iomanip>
using namespace std;
void getData(float a[50][50]);
float averageHigh(float a[50][50]);
float averageLow(float a[50][50]);
float indexHighTemp(float a[50][50]);
float indexLowTemp(float a[50][50]);

int main()
{
    float data[50][50];
    getData(data);
    // cout << "nhiet do cao tb ";
    // cout << averageHigh(data);

    // cout << "nhiet do thap tb ";
    // cout << averageLow(data);

    // cout << "vi tri cua nhiet do cao nhat la ";
    // cout << setw(2) << setfill('0') <<  indexHighTemp(data);

    cout << "vi tri cua nhiet do cao thap la ";
    cout << setw(2) << setfill('0') <<  indexLowTemp(data);

    return 0;
}

void getData(float fullTemp[50][50])
{
    int u = 1;
    cout << "nhap nhiet do theo thu tu cao nhat den thap nhat \n";
    for (int i = 0; i < 12; i++)
    {

        if (u > 12)
            break;
        cout << "thang thu " << u << endl;
        u += 1;
        cin >> fullTemp[i][0] >> fullTemp[i][1];
    }
}
float averageHigh(float a[50][50])
{

    float sumHigh = 0;
    for (int i = 0; i < 12; i++)
    {
        if (a[i][0] >= a[i][1])
            sumHigh += a[i][0];
        else
            sumHigh += a[i][1];
    }

    float avrHighTmp = sumHigh / 12;
    return avrHighTmp;
}
float averageLow(float a[50][50])
{

    float sumHigh = 0;
    for (int i = 0; i < 12; i++)
    {
        if (a[i][0] <= a[i][1])
            sumHigh += a[i][0];
        else
            sumHigh += a[i][1];
    }

    float avrLowTmp = sumHigh / 12;
    return avrLowTmp;
}
float indexHighTemp (float a[50][50])
{
    float maxTemp = 0;
    int index, jndex;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(maxTemp <= a[i][j]){
                maxTemp = a[i][j];
                index = i;
                jndex = j;
            }
        }
        
    } 
    return index * 10 + jndex;
}
float indexLowTemp (float a[50][50])
{
    float minTemp = 10e5;
    int index, jndex;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(minTemp >= a[i][j]){
                minTemp = a[i][j];
                index = i;
                jndex = j;
            }
        }
        
    } 
    return index * 10 + jndex;
}