#include<bits/stdc++.h>

using namespace std;

int n=6;
int Next[6]={0};
int Cur[6]={0};

int analys02()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(j<i)
			{
				Next[j] = Cur[i];
			}
			else
			{
				Next[j] = Cur[i] + Next[j-i];
			}
		}
		memcpy(Cur,Next,(n+1)*sizeof(int));
	}
	return Cur[n];
}
void out(int n)
{
for(int i=1;i<=n;i++)
	{
		cout<<Cur[i]<<" ";
	}
}
int main()
{
	Cur[0]=1;
	analys02();
	
	for(int i=1;i<=n;i++)
	{
		cout<<Cur[i]<<" ";
	}
}
