#include<bits/stdc++.h>
#define Max 20
using namespace std;
int pouring(int n,int *a,int m)
{
	int i=0;
	int dem=0;
	while(i<m && n>=a[i])
	{
		n=n-a[i];
		i++;
		dem++;
	}
	cout<<dem;
}

int main()
{
	int n;
	cout<<"nhap luong nuoc cho binh: ";cin>>n;
	int m;
	cout<<"nhap so chai nuoc: ";cin>>m;
	int a[Max];
	for(int i=0;i<m;i++)
	{
		cout<<"nhap luong nuoc cho tung chai: ";
		cin>>a[i];
	}
	pouring(n,a,m);
}
		
	
	
