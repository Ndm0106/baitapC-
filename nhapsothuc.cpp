#include<stdio.h>

void nhap(int &n)
{
	do
	{
    printf("nhap so: ");
	scanf("%d",&n);
	}while(n<0);
	{
		printf("yeu cau nhap lai");
	}
	
}
 void xuat(int &n)
{
	printf("\nso vua nhap la %d",n);
}
int main()
{
	int a;
	nhap(a);
	xuat(a);
}
