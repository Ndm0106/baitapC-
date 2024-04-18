#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%f",&a[i]);
	}
}
void xuat(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n%f",a[i]);
	}
}
int tinhtong(float a[],int n)
{
	float S=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			S=S+a[i];
		}
	}
	printf("\ntong S= %f",S);
}
void timvitri(float a[],int &n)
{
	float Min;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			Min=a[i];
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<Min && a[i]>0)
	    {
	    	Min=a[i];
	    	printf("\nvi tri phan tu duong nho nhat la` %d",i+1);
	    }
	}
}
void sapxep(float a[],int &n)
{
	float sx;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n+1;j++)
		{
			if(a[i]<a[j])
			{
			sx=a[i];
			a[i]=a[j];
			a[j]=sx;
			}
		}
	}
}	
int main()
{
	int n;
	float a[MAX];
	printf("nhap n: ");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	tinhtong(a,n);
	timvitri(a,n);
	sapxep(a,n);
	xuat(a,n);
}
