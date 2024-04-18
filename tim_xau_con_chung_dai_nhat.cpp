#include<bits/stdc++.h>
using namespace std;


void longest_Common(string a, string b){  // H�m t�m x�u con l?n nh?t v� in ra m�n h�nh
    int n = a.size();  // n chi?u d�i x�u a, m chi?u d�i x�u b
    int m = b.size();
    int max_Size;     // Bi?n luu d? d�i con chung l?n nh?t
    string subsequence = "";  // Bi?n luu con chung d�ng khi truy v?t
    int L[n+1][m+1];   // Khai b�o m?ng luu k?t qu?:  n+1 h�ng, m+1 c?t
    
    for(int i=0; i<=n; i++)   // G�n c?t d?u ti�n b?ng 0
        L[i][0] = 0;
    for(int j=0; j<=m; j++)   // G�n h�ng d?u ti�n = 0
        L[0][j] = 0;
        
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1] == b[j-1]){  // N?u c� ph?n t? b?ng nhau
                L[i][j] = L[i-1][j-1] + 1;   // �p d?ng c�ng th?c
            }
            else{   // Tru?ng h?p a[i-1] kh�c b[j-1]
                if(L[i-1][j] >= L[i][j-1])     // T�m max gi?a L[i-1][j] v� L[i][j-1]
                    L[i][j] = L[i-1][j];
                else
                    L[i][j] = L[i][j-1];
            }
        }
    }
    max_Size = L[n][m];  // T�m du?c d? d�i con l?n nh?t
    int i = n; 
    int j = m;
    while(L[i][j] != 0){ // �i?u ki?n d?ng
        if(a[i-1] == b[j-1]){  // N?u b?ng nhau
            subsequence += a[i-1];   // C?ng a[i-1] v�o x�u con
            i--;
            j--;
        }
        else{  // N?u kh�c nhau
            if(L[i-1][j] >= L[i][j-1]) // So s�nh
                i--;
            else
                j--;
        }
    }
    
    cout<<"\nDo dai xau lon nhat: "<<max_Size;  // In ra d? d�i con l?n nh?t
    cout<<"\nXau con: ";
    for(int t = max_Size-1 ; t>=0; t--)  // In ngu?c t? cu?i v? d?u d? x�u con d�ng th? t?
        cout<<subsequence[t];
}
int main(){
    string a, b;
    b="BACDB";
    a="BDCB";
    longest_Common(a,b);
    return 0;    
}
