#include<bits/stdc++.h>
using namespace std;
int f[6]={0};
int m=5;
int n=5;
int analys03()
{ 
    for (int i = 1; i <= m; i++)
	{
        for (int j = i; j <= n; j++)
		{
            if (j < i) 
			{
                f[j] = f[j] + f[j - i];
            }
        }
    }
    return f[n];
}
int main()
{
	f[0]=1;
	analys03();
	for(int i=1;i<6;i++)
	{
		cout<<f[i]<<" ";
	}
	cout<<endl;
}
