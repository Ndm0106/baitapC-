#include<bits/stdc++.h>
using namespace std;
void xl_le(int x);
void xl_chan(int x);
void xl_so(int x);
void xl_le(int x)
{
	cout<<x*3+1<<",";
	xl_so(x*3+1);
}
void xl_chan(int x)
{
	cout<<x/2<<",";
	xl_so(x/2);
}
void xl_so(int x)
{
	if(x%2==0)
	{
		xl_chan(x);
	}
	else if(x>1)
	{
		xl_le(x);
	}
}
int main()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	xl_so(n);
}
