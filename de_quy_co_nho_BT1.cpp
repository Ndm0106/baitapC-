#include<bits/stdc++.h>
using namespace std;
long F[50];
long FB(int n)
{
	if(n<2)
	{
		return n;
	}
	else
	{
		if(F[n]==0)
		{
			F[n]=FB(n-1)+FB(n-2);
		}
	}
	return F[n];
}
int main()
{
	int n,sum=0;
	cout<<"nhap n: ";cin>>n;
	FB(n);
	for(int i=0;i<=n;i++)
	{
		cout<<F[i];
		sum+=F[i];
	}
	cout<<" "<<F[i];
	cout<<sum;
}
