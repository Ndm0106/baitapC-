#include<bits/stdc++.h>
using namespace std;

void z_algo(char *s, int *z) 
{
int n = strlen(s), l = 0, r = 0;
for (int i = 1; i < n; i++) 
{
    if (i > r) 
    {
        l = r = i;
        while (r < n && s[r - l]== s[r]) r++;
        z[i] = r - l; r --;
    } else if (z[i - l] < r - i + 1)
        z[i] = z[i-l];
    else 
	{ l = i;
        while (r < n && s[r - l] == s[r]) r ++;
        z[i] = r - l; r --;
    }
    cout<<z[i];
}
}
int main()
{
	char s[]="ACBDABACBAC";
    int z[20]={0};
	z_algo(s,z);
}
