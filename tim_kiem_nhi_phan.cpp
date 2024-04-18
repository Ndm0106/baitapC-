#include <bits/stdc++.h>
using namespace std;
 

int timkiemnhiphan(int a[], int left, int right, int x) {
    int mid;
 
    while(left <= right) {
        
        mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (x > a[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int a[] = {15, 20, 25, 30, 31, 44, 66};
 
    
    int n = sizeof(a) / sizeof(a[0]);
   
    int x = 25;
     
    
    int result = timkiemnhiphan(a, 0, n-1, x);
 
    cout << result;
}
