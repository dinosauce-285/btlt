#include <iostream>
using namespace std;
void set2dArray(int a[50][50], int m, int n);
void print2dArray(int a[50][50], int m, int n);
int sumArray(int a[50][50], int m, int n);
int sumDiagonal(int a[50][50], int m, int n);
int findMin(int a[50][50], int m, int n);
int countNumberofPrime(int a[50][50], int m, int n);
int checkPrime(int n);
void countNumberofUniquePrime(int a[50][50], int m, int n); 
int countOccurrences(int a[50][50], int m, int n, int x);
void deleteItems(int a[50][50], int &m, int &n, int x);

int main (){
    int m, n;
    int a[50][50];
    cout << "nhap dong, cot" << endl; 
    cin >> m >> n;
    set2dArray(a, m, n);

    // print2dArray(a, m, n);
    // cout << sumArray(a, m, n) << endl;

    // cout << sumDiagonal(a, m, n);

    //cout << findMin(a, m, n);

    //cout << countNumberofPrime(a, m, n);

    //countNumberofUniquePrime(a, m, n);

    cout << "nhap x de ktra so lan xuat hien trong ";
    int x;
    cin >> x;
    cout << countOccurrences(a, m, n, x);


}
void set2dArray(int a[50][50], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "a[" << i << "][" << j << "] ";
            cin >> a[i][j];
        } 
    }
}
void print2dArray(int a[50][50], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        } 
    cout << endl;
    }
}
int sumArray(int a[50][50], int m, int n){
    int sum = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        } 
    }
    return sum;
}

int sumDiagonal(int a[50][50], int m, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][i];
    }
    return sum;
}
int findMin(int a[50][50], int m, int n){
    int min = 10e5;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (min > a[i][j]){
                min = a[i][j];
            }
        } 
    }
    return min;
}
int checkPrime(int n){
    if ( n < 2){
        return 0;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
        
    }
    return 1;
}

int countNumberofPrime(int a[50][50], int m, int n){
    int count = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (checkPrime(a[i][j]) == 1){
                count += 1;
            }
        } 
    }
    return count; 
}
void countNumberofUniquePrime(int a[50][50], int m, int n){
    //chua xong chua xong chua xong chua xong



    int k = 0;
    int snt[1000];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (checkPrime(a[i][j]) == 1){
                snt[k] = a[i][j];
                k++;
            }
        } 
    }
    for (int i = 0; i < k; i++)
    {
        cout << snt[i] << " "; 
    }
    
}
int countOccurrences(int a[50][50], int m, int n, int x){
     int count = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == x)
            {
                count += 1;
            }
            
        } 
    }
    return count;
}
void deleteItems(int a[50][50], int &m, int &n, int x){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x == a[i][j])
            {
                for (int u = 0; u < m; u++)
                {
                    /* code */
                }
                
            }
            
        }
        
    }
    
}