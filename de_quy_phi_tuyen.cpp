#include<bits/stdc++.h>
using namespace std;
int A(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		int tg=0;
		for(int i=0;i<n;i++)
		{
			tg=tg+pow(n-1,2)*A(i);
			return tg;
		}
    }	
}
int main()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	A(n);
	cout<<" "<<A(n);
}
