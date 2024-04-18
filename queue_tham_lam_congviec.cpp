#include <bits/stdc++.h>
using namespace std;
 
struct congviec
{
    int start, finish;
};
 

bool sosanh(congviec s1, congviec s2)
{
    return (s1.finish < s2.finish);
}
 

void interval_sheduling(congviec a[], int n)
{
    
    sort(a, a+n, sosanh);
 
    cout << "cac cong viec duoc chon n";
 
   
    int i = 0;
    cout << "(" << a[i].start << ", " << a[i].finish << "), ";
 
    
    for (int j = 1; j < n; j++)
    {
    
      if (a[j].start >= a[i].finish)
      {
          cout << "(" << a[j].start << ", "
              << a[j].finish << "), ";
          i = j;
      }
    }
}
 

int main()
{
    congviec a[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},
                                       {5, 7}, {8, 9}};
    int n = sizeof(a)/sizeof(a[0]);
    interval_sheduling(a, n);
    return 0;
}
