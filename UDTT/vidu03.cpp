#include<bits/stdc++.h>
using namespace std;
void docdl(long *&a,int &n)
{
	ifstream fin("input.txt");
	fin>>n;
	a=new long[n];
	for(int i=0;i<n;i++)
	{
		fin>>a[i];
	}
	fin.close();
}
void ht(long *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
long tt(long *a,int n,int &l,int &r)
{
	long Max=a[0];
	int s[n];
	s[0]=a[0];
	Max = s[0];
	l=r=0;
	for(int i=1;i<n;i++)
	{
		if(s[i-1]>0)
		{
			s[i]=s[i-1]+a[i];
		}
		else
		{
			s[i]=a[i];
			l=i;
		}
		if(Max < s[i] )
		{
			Max=s[i];
			r=i;
		}
	}
	return Max;
}
void ghidl(long *&a,int &l,int &r)
{
	ofstream fout("output3.txt");
	fout<<l<<" "<<r<<endl;
	for(int i=l;i<=r;i++)
	{
		fout<<a[i]<<" ";
	}
	fout.close();
}
int main()
{
	long *a,Max;
	int n,l,r;
	docdl(a,n);
	cout<<"day s: ";
	ht(a,n);
	Max=tt(a,n,l,r);
	cout<<"day con lon nhat la s("<<l+1<<","<<r+1<<"): ";
	for(int i=l;i<=r;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"tong cua day con la "<<Max<<endl;
	ghidl(a,l,r);
}
	
