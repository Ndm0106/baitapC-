#include<bits/stdc++.h>
using namespace std;
float P(int n)
{
		if(n==0)
		{
			return 1;
		}
		else if(n>0)
		{
			return P(2*n-1)+P(2*n+1);
		}
}
int main()
{
	int n;
	cout<<"nhap n: ";cin>>n;
	P(n);
	cout<<P(n);
	return 0;
}

