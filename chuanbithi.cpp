#include<stdio.h>
#include<conio.h>
#define MAX 100
void nhap(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
int xoaphantu(int a[],int &n,int vitrixoa)
{
	for(int i=vitrixoa;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	return 1;
}
int xoanhieuphantu(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			xoaphantu(a,n,i);
			i--;
		}
	}
}
	
int main()
{
	int a[MAX],n,k;
	do{
		printf("\nnhap n: ");
		scanf("%d",&n);
		if(n<=5||n>=100)
		{
			printf("vui long nhap lai");
		}
	}while(n<=5||n>=100);
	nhap(a,n);
	xuat(a,n);
	xoanhieuphantu(a,n);
	printf("\nmang sau khi xoa");
	xuat(a,n);
}
