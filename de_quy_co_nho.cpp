#include<bits/stdc++.h>
using namespace std;

long d[10][10];
long C(int k,int n);
long C(int k,int n)
{
	if(k==0||n==0)
	{
		d[k][n]=1;
	}
	else if(d[k][n]<0)
	{
		d[k][n]=C(k, n-1) + C(k-1, n-1);
	}
	return d[k][n];
}
int main()
{
	int n,k;
	cout<<"nhap k: ";cin>>k;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<=k;i++)
	{
		for(int j=0;j<=n;j++)
		{
			d[i][j]=-1;
		}
	}
	C(k,n);
	cout<<" "<<C(k,n);
}
