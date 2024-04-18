#include<bits/stdc++.h>
using namespace std;
int indexOf(char p[20],char t[20]) 
{
    int m = strlen(p);
    int n = strlen(t) - m;
    for (int i = 0; i < n; i++)
	{
        int j = 0;
        while (j < m && t[i + j] == p[j])
		{
            j++;
		}
        if (j == m)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
	char p[20]="mothaibabon";
	char t[20]="haiba";
	if(indexOf(p,t) == -1)
		cout<<"khong ";
	else
	    cout<<"co";
}
