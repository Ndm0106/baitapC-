#include<bits/stdc++.h>
using namespace std;
void input(int a[],int &n)
{
	do{
		printf("nhap n: ");
		scanf("%d",&n);
		if(n>10 || n<1)
		{
			printf("yeu cau nhap lai");
		}
	}while(n>10 || n<1);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void output(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
void tbcsochan(int a[],int &n)
{
	float tbc,S=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			S=S+a[i];
			dem++;
		}
	}
	tbc=S/dem;
	printf("\ntbc cua so chan la %f",tbc);
}
void max(int a[],int &n)
{
	int Max=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>Max)
		{
			Max=a[i];
			dem++;
		}
	}
	printf("\nMax la %d va xuat hien %d lan trong mang",Max,dem);
}
int main()
{
	int a[100],n;
	input(a,n);
	output(a,n);
	tbcsochan(a,n);
	max(a,n);
}
