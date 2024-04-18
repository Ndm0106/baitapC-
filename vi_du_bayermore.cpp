#include<bits/stdc++.h>
using namespace std;
char t[10] = "abcabdefg";
char p[4] = "abc";
int indexOf(char *p, char *t){
    int m = strlen(p);
    int n = strlen(t) - m;
    for(int i=0; i<n; i++){
        int j=0;
        while(j<m && t[i+j] == p[j]){
            j++;
        }
        if(j==m)
            return i;
    }
    return -1;
}

int char_in_string(char c, char *p){
    for(int i=0; i<strlen(p); i++){
        if(p[i] == c)
            return i;
    }
    return -1;
}

int Boyer_Moore_Horspool(){
    int dem = 0, i = strlen(p), v = strlen(p);
    while(i<strlen(t)){
        int x = v-1, j=i-1;
        while(t[j] == p[x] && x > -1){
            j--; x--;
        }
        if(x<0){
            dem++;
            i = i+v;
        }
        else{
            x = char_in_string(t[j], p);
            if(x<0)
                i= i+v;
            else
                i=i+v-x-1;
        }
    }
    return dem;
}

main(){
//    if(indexOf(p, t) != -1)
//        cout<<"La tap con"<<endl;
//    else
//        cout<<"Khong la tap con"<<endl;


    if(Boyer_Moore_Horspool() == 0)
        cout<<"Khong"<<endl;
    else
        cout<<"Co"<<endl;
}
