#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int &n)
{
	do{
	    printf("nhap n: ");
		scanf("%d",&n);
		if(n<5)
		{
			printf("\n yeu cau nhap lai ");
		}
	}while(n<5);
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
		printf("%2d",a[i]);
	}
}
void timMaxduong(int a[],int &n)
{
	int Max=0,vt;
	for(int i=0;i<n;i++)
	{
		if(a[i]>Max && a[i]>0)
		{
			Max=a[i];
			vt=i+1;
		}
	}
	printf("\nso duong lon nhat la %d va tri trong cua no trong mang la %d",Max,vt);
}
void sapxepgiam(int a[],int &n)
{
	int hv;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n+1;j++)
		{
			hv=a[i];
			a[i]=a[j];
			a[j]=hv;
		}
	}
	
}
void chen(int a[],int &n,int &k)
{
 int x;
 printf("nhap so can chen:");
 scanf("%d",&x);
 for(int i=n;i>=k;i--)
 {
 a[i]=a[i-1];
 }
 a[k]=x;
 n++;
 xuat(a,n);
 
}
int main()
{
	int a[100],n,k;
	nhap(a,n);
	xuat(a,n);
	timMaxduong(a,n);
	sapxepgiam(a,n);
	printf("\nnhap vi tri can chen:");
    scanf("%d",&k);
    chen(a,n,k);
}
