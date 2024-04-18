#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhapso(int &n)
{
	printf("nhap n: ");
	scanf("%d",&n);
}
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
		printf("%4d",a[i]);
	}
}
int timvatong(int a[],int &n,int k)
{
	int S=0;
	for(int i=0;i<n;i++)
	{
		if(k==0)
		{
			printf("khong co tong cac so nho hon k");
		}
		else{
		if(a[i]>=k)
		{
			printf("%2d",a[i]);
			S=S+a[i];
		}
	}
	}
	printf("\nS = %d",S);	
}

int xoaphantulientruoc(int a[],int &n)
{
	int Min=a[0];
	    for(int j=0;j<n-1;j++)
	    {
	    	if(a[j]<Min)
	    	{
	    		Min=a[j];
	    		a[j]=a[j+1];
	    	}
	    }
	n--;
}
		
int main()
{
	int a[MAX];
	int k,n;
	nhapso(n);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nnhap k: ");
	scanf("%d",&k);
	printf("\nphan tu khong nho hon k:");
	timvatong(a,n,k);
	xoaphantulientruoc(a,n);
	printf("\nmang sau khi xoa la");
	xuatmang(a,n);
	
}
	
