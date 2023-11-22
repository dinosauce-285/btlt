#include <iostream>
#include <cstring>
#define MAX 256
using namespace std;
void reverseCharArray(char a[MAX]);
int checkSymmetricArray(char a[MAX]);
int countOccurrencesChar(char a[MAX], char c);
int findMostFrequentChar(char a[MAX]);
void insertCharAtPosition(char str[], char chr, int pos);
void formatNumberWithCommas(char str[]);

int main (){
    char a[MAX]; 
    cout << "nhap ";
  
    cin.getline(a, MAX);

     //reverseCharArray(a);
    //cout << "\n";
    //cout << checkSymmetricArray(a) << endl;
    //char c;
    //cout << "nhap c de dem so lan xh cua c ";
    //cin >> c;
    //cout << countOccurrencesChar(a, c) << endl;

    //cout << findMostFrequentChar(a) << " lan";

    // char chr;
    // int pos;
    // cout << "nhap ki tu can them "; 
    // cin >> chr;
    // cout << "\nnhap vi tri muon them ";
    // cin >> pos; 
    // insertCharAtPosition(a, chr, pos);

  //  formatNumberWithCommas(a);

    
    return 0;

}

void reverseCharArray(char a[MAX]){
    for(int i = strlen(a); i >= 0; i--){
        cout << a[i];
    }
}

int checkSymmetricArray(char a[MAX]){
    for(int i = 0; i < strlen(a)/2; i++){
        if (a[i] != a[strlen(a) - i - 1])
            return 0;
        
        
    }
    return 1;
}
int countOccurrencesChar(char a[MAX], char c){
    int count = 0;
    for(int i = 0; i < strlen(a); i++){
        if (a[i] == c)
            count += 1; 
    
        
    }
    return count; 
    

}

int findMostFrequentChar(char a[MAX]){
    int count = 0, max = 0;
    char chr;

    for (int i = 0; i < strlen(a); i++)
    {
        for (int j = 0; j < strlen(a); j++){
            if (a[i] == a[j]){
                count += 1;
            }
            
        }
    if (max < count){
        max = count;
        chr = a[i];
    }
    count = 0;
      
    }
    cout << chr << " xuat hien ";
    return max;
}
