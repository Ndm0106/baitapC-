#include<bits/stdc++.h>
#define max 100
using namespace std;

void input(int a[],int &n)
{
    printf("nhap kich thuoc phan tu: ");
	scanf("%d",&n);
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
	    printf("\na[%d]= %d",i,a[i]);
	}
}
void timMax(int a[],int n)
{
	int Max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0 && a[i]>Max)
		{
			Max=a[i];
		}
	}
	printf("\nso le lon nhat la %d",Max);
}
void timMin(int a[],int n)
{
	int Min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0 && Min>a[i])
		{
			Min=a[i];
		}
	}
	printf("so chan nho nhat la %d",Min);
}
bool kiemtrasonguyento(int n)
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
int demsonguyento(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (kiemtrasonguyento(a[i]))
        {
            dem++;
        }
    }
    printf("so luong so nguyen to trong mang la: %d",dem);
}
bool sochinhphuong(int n){
    int scp = sqrt(n);
    return (scp*scp==n);
}
void tongscp(int a[],int n)
{
	int S=0;
	for(int i=0;i<n;i++)
	{
		if(sochinhphuong(a[i]))
		{
			S=S+a[i];
		}
	}
	printf("\ntong cac so chinh phuong la %d",S);
}		
void sapxepgiam(int a[],int n)
{
	int hv;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			hv=a[i];
			a[i]=a[j];
			a[j]=hv;
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
		printf("\n3.tim va hien thi so chan nho nhat va so le lon nhat");
		printf("\n4.so nguyen to");
		printf("\n5.tim va tinh tong so chinh phuong");
		printf("\n6.sap xep mang giam dan");
		printf("\n7.ket thuc chuong trinh");
	printf("\nnhap lua chon: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
	        input(a,n);
	        break;
	    case 2:
	        output(a,n);
	        break;
	    case 3:
	    	timMin(a,n);
	    	timMax(a,n);
	    	break;
	    case 4:
	    	demsonguyento(a,n);
	    	break;
	    case 5:
	    	tongscp(a,n);
	    	break;
	    case 6:
	    	sapxepgiam(a,n);
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
