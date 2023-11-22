#include <iostream>
using namespace std;

void setArray(int a[], int &n);
void printArray(int a[], int n);
int sumArray(int a[], int n);
int findMin(int a[], int n);
int checkPrime(int n);
int countNumberofPrime(int a[], int n);
int isAscendingOrder(int a[], int n);
int countOccurrences(int a[], int n, int x);
void deleteItems(int a[], int &n, int x);
void deleteItemsFromIndex(int a[], int &n, int index, int no_items);
void concatTwoArrays(int a[], int n, int b[], int m, int c[]);
void concatInterspersedlyTwoArrays(int a[], int n, int b[], int m, int c[]);

int main()
{
    int a[1000], b[1000], c[1000];
    int n, m;
    cout << "nhap n";
    cin >> n;
    // setArray(a, n);
    // printArray(a, n);
    //  cout << "sum " << sumArray(a, n) << endl;
    //  cout << "min " << findMin(a, n) << endl;
    //  cout << "prime " << countNumberofPrime(a, n) << endl;
    //  cout << isAscendingOrder(a, n) << endl;
    //  int x;
    //  cout << "nhap so muon tinh so lan xuat hien ";
    //  cin >> x;
    //  cout << countOccurrences(a, n, x) << endl;
    //  cout << "nhap so muon xoa \n";
    //  int x1;
    //  cin >> x1;
    //  deleteItems(a, n, x1);
    //  int index, no_items;
    //  cout << "nhap vi tri muon xoa ";
    //  cin >> index;
    //  cout << "nhap so phan tu muon xoa ";
    //  cin >> no_items;
    //  deleteItemsFromIndex(a, n, index, no_items);
    cout << "nhap m ";
    cin >> m;
    // concatTwoArrays(a, n, b, m, c);
    concatInterspersedlyTwoArrays(a, n, b, m, c);

    return 0;
}
void setArray(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }
    return sum;
}
int findMin(int a[], int n)
{
    int min = 10e5;
    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int checkPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int countNumberofPrime(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i]) == 1)
        {
            count += 1;
        }
    }

    return count;
}
int isAscendingOrder(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            return 0;
        }
    }
    return 1;
}
int countOccurrences(int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count += 1;
        }
    }
    return count;
}
void deleteItems(int a[], int &n, int x)
{
    int tmp(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            tmp = i;
            break;
        }
    }
    for (int i = tmp; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    cout << "sau khi xoa ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void deleteItemsFromIndex(int a[], int &n, int index, int no_items)
{

    for (int i = index; i < n; i++)
    {
        a[i] = a[i + no_items];
    }
    n -= no_items;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void concatTwoArrays(int a[], int n, int b[], int m, int c[])
{
    cout << "nhap mang a ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    cout << "nhap mang b ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        c[i + n] = b[i];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}
void concatInterspersedlyTwoArrays(int a[], int n, int b[], int m, int c[])
{
    int j = 0, k = 0;
    cout << "nhap mang a ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "nhap mang b ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    while (j < n && k < m)
    {
        c[i] = a[j];
        i++;
        j++;
        c[i] = b[k];
        i++;
        k++;
    }
    while (j < n)
    {
        c[i] = a[j];
        i++;
        j++;
    }
    while (k < m)
    {
        c[i] = b[k];
        i++;
        k++;
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
}