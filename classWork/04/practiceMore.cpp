// #include <iostream>
// using namespace std;

// void setArray(int a[], int &n);
// void insertAtPos(int a[], int k);
// void deleteManyAtPos(int a[], int &k);
// void deleteInput(int a[], int &k);

// void set2DArray(int a[][50], int &m, int &n);
// void deleteRowCol(int a[][50], int &m, int &n, int &x);

// int main()
// {
//     int b[50][50], m, n, x;
//     // int a[1000], n;

//     // setArray(a, n);
//     // deleteInput(a, n);

//     // deleteManyAtPos(a, n);

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }

//     set2DArray(b, m, n);

//     return 0;
// }
// void set2DArray(int a[][50], int &m, int &n)
// {
//     cin >> m >> n;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

// }
// void setArray(int a[], int &n)
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }
// void insertAtPos(int a[], int k)
// {
//     int n, pos;
//     cin >> n >> pos;
//     for (int i = k; i >= pos; i--)
//     {

//         a[i + 1] = a[i];
//     }
//     a[pos] = n;
// }
// void deleteManyAtPos(int a[], int &k)
// {
//     int n, pos;
//     cin >> n >> pos;
//     for (int i = pos; i < k; i++)
//     {
//         a[i] = a[i + n];
//     }
//     k -= n;
// }
// void deleteInput(int a[], int &k)
// {
//     int x;
//     cin >> x;
//     for (int i = 0; i < k; i++)
//     {
//         if (a[i] == x)
//         {
//             for (int j = i; j < k - 1; j++)
//             {
//                 a[j] = a[j + 1];
//             }
//             i--;
//             k--;
//         }
//     }
// }

#include <iostream>
using namespace std;
void deleteRowCol(int a[][50], int &m, int &n);
void set(int a[][50], int &m, int &n);
int main()
{
    int a[50][50], m, n;
    set(a, m, n);
    deleteRowCol(a, m, n);
}
void set(int a[][50], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void deleteRowCol(int a[][50], int &m, int &n)
{
    int x;
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                for (int u = i; u < m - 1; u++)
                {
                    for (int v = 0; v < n; v++)
                    {
                        a[u][v] = a[u + 1][v];
                    }
                }
                for (int u = 0; u < m - 1; u++)
                {
                    for (int t = j; t < n - 1; t++)
                    {
                        a[u][t] = a[u][t + 1];
                    }
                }

                m -= 1;
                n -= 1;
                i--;
                j--;
            }
        }
    }
    cout << "mang sau khi xoa: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}