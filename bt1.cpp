#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xoa(int a[],int n,int vt)
{
	int i;
	if(vt>=0 && vt<n)
	{
	    for(int i=vt;i<n-1;i++)
	    {
		    a[i]=a[i+1];
	    }
	}
	i--;
	n--;
}	
void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void ptduong(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		printf("\na[%d]= %d",i,a[i]);
	}
}
void sapxepgiam(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int tg;
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int main()
{
	int n,a[100],vt;
	printf("nhap so luong phan tu: ");
	do
	{
	scanf("%d",&n);
	if(n<0 || n>100)
	{
		printf("nhap lai so luong phan tu");
	}
	}while(n<0 || n>100);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nmang duong gom");
	ptduong(a,n);
	printf("\nnhap vi tri can xoa: ");
	scanf("%d",&vt);
	xoa(a,n,vt);
	printf("mang sau khi xoa");
	xuatmang(a,n);
	sapxepgiam(a,n);
	printf("mang sau khi sap xep");
	xuatmang(a,n);
}
	
