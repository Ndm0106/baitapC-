#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhap(int &n,float &x,float &y)
{
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap y: ");
	scanf("%f",&y);
}
float tinhT(int &n,float &x,float &y)
{
	float T=0;
	if(n==0 && x<=0 && y<=0)
	{
		printf("T=0");
	}
	else
	{
		T=sqrt(1+(pow(x,9)+y)/(9*n)+(x/(7*n)));
	}
	return T;
}
int main()
{
	float x,y;
	int n;
	nhap(n,x,y);
	float kq=tinhT(n,x,y);
	printf("kq la %f",kq);
}
	
