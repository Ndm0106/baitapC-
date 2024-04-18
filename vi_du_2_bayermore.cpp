#include <bits/stdc++.h>
using namespace std;

int char_in_string(char c, string P){
    for(int i = 0 ; i < P.length() ; i++){
        if(P[i] == c){
            return i;
        }
    }

    return -1;
}

//thuat toan Boyer kiem tra 1 chuoi co la chuoi con cua 1 chuoi khac hay khong
int Boyer_Moore_Horspool(string T){
    string P = "H00";
      int dem = 0, i = P.length(), v = P.length();

      while (i <= T.length()) {
        int x = v - 1, j = i - 1;
        while (T[j] == P[x] && x > -1) {
          j--;
          x--;
        }

        if (x < 0) {
          dem++;
          i = i + v;
        } else {
          x = char_in_string(T[j], P);

          if (x < 0) {
              i = i + v;
          } else {
              i = i + v - x - 1;
          }
        }
      }

      return dem;
}

int main(){
    cout<<Boyer_Moore_Horspool("AAAAAH00");
}
