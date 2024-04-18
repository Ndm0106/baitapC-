#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int xoa(int a[],int &n,int k)
{
	if(k<0 || k>=n)
	{
		return 0;
	}else
	{
		for(int i=k;i<n-2;i++)
		{
			a[i]=a[i+1];
			n--;
		}
		return 1;
	}
}
int timkiem(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			a[0]=x;
			x=a[i];
			a[i]=a[0];
		}
	else{
		return -1;
	}
}
}

int main()
{
	int k,n,a[100];
	do
	{
		printf("nhap n: ");
	    scanf("%d",&n);
	}while(n<5 || n>100);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("nhap vi tri k can xoa: ");
	scanf("%d",&k);
	xoa(a,n,k);
	xuatmang(a,n);
	int x;
	printf("vi tri x can tim kiem: ");
	scanf("%d",&x);
	timkiem(a,n,x);
	xuatmang(a,n);
}
