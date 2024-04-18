#include <bits/stdc++.h>
using namespace std;
 

void printMaxActivities(float s[], float f[], int n)
{
    int i, j;
 
    cout <<"cac cong viec duoc chon "<< endl;
 
    
    i = 0;
    cout <<" "<< i;
 
    
    for (j = 1; j < n; j++)
    {
      
      if (s[j] >= f[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
 

int main()
{
    float s[] =  {8, 9, 10, 11, 12};
    float f[] =  {8.5, 10, 11.5, 12.5, 13};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
