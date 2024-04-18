#include<bits/stdc++.h>
#define max 100
using namespace std;

void input(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	    printf("\t%d",a[i]);
	}
}
void timsoamMax(int a[],int n)
{
	int Max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			Max=a[i];
			break;
		}
	}
	if(Max!=0)
	{
	    for(int i=0;i<n;i++)
	    {
		    if(a[i]<0 && a[i]>Max)
		    {
			Max=a[i];
		    }
		}
	}
	printf("\nso am lon nhat la %d",Max);
}
void timsoduongMin(int a[],int n)
{
	int Min=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			Min=a[i];
			break;
		}
	}
	if(Min!=0)
	{
	    for(int i=0;i<n;i++)
	    {
		    if(a[i]>0 && Min>a[i])
		    {
			    Min=a[i];
		    }
		}
	}
	printf("so duong nho nhat la %d",Min);
}
bool sochinhphuong(int n){
    int scp = sqrt(n);
    return (scp*scp==n);
}
bool songuyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int demsochinhphuong(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (sochinhphuong(a[i]))
        {
            dem++;
        }
    }
    printf("so luong so chinh phuong trong mang la: %d",dem);
}
void tongsnt(int a[],int n)
{
	int S=0;
	for(int i=0;i<n;i++)
	{
		if(songuyento(a[i]))
		{
			S=S+a[i];
		}
	}
	printf("\ntong cac so nguyen to la %d",S);
}		
void sapxeptang(int a[],int n)
{
	int hv;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			hv=a[i];
			a[i]=a[j];
			a[j]=hv;
			}
		}
	}
}
int main()
{
	int a[max],n;
	int k;
	do{
	Menu:
		printf("\n========Menu=========");
		printf("\n1.nhap mang");
		printf("\n2.xuat mang");
		printf("\n3.tim va hien thi so duong nho nhat va so am lon nhat");
		printf("\n4.dem so chinh phuong trong mang");
		printf("\n5.tim va tinh tong so nguyen to");
		printf("\n6.sap xep mang tang dan");
		printf("\n7.ket thuc chuong trinh");
	printf("\nnhap lua chon: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			printf("nhap kich thuoc phan tu: ");
            do
	        {
	        scanf("%d",&n);
	        if(n<=0||n>50)
	        {
	        	printf("yeu cau nhap lai ");
	        }
	        }while(n<=0||n>50);
	        input(a,n);
	        break;
	    case 2:
	    	printf("mang vua nhap la ");
	        output(a,n);
	        break;
	    case 3:
	    	timsoduongMin(a,n);
	    	timsoamMax(a,n);
	    	break;
	    case 4:
	    	demsochinhphuong(a,n);
	    	break;
	    case 5:
	    	tongsnt(a,n);
	    	break;
	    case 6:
	    	sapxeptang(a,n);
	    	printf("mang sau khi sap xep");
	    	output(a,n);
	    	break;
	    case 7:
	    	printf("ket thuc chuong trinh");
	    	break;
	    default:
		    printf("%d khong co trong menu",k);
		    break;
	    }
	}while(k!=7);
}
