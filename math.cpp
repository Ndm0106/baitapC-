#include<stdio.h>
#include<conio.h>

void nhap(int a,int b)
{
	int dai,rong;
	printf("nhap chieu dai: ");
	scanf("%d",&dai);
	printf("\nnhap chieu rong: ");
	scanf("%d",&rong);
}
int S(int &a,int &b)
{
	int x,y;
	return x*y;
}
int C(int &a,int &b)
{
	int x,y;
	return (x+y)*2;
	
}
int main()
{
	int dai,rong;
	nhap(dai,rong);
	S(dai,rong);
	C(dai,rong);
	printf("dien tich la %d",S(dai,rong));
	printf("\nchu vi la %d",C(dai,rong));
}
	
	
	
