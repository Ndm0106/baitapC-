#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(float &x,int &n)
{
	do{
	printf("nhap x: ");
	scanf("%f",&x);
	if(n<0)
	{
		printf("yeu cau nhao lai");
	}
	}while(n<0);
	printf("nhap n: ");
	scanf("%d",&n);
}
float F(float &x,int &n)
{
	float f=0;
	if(x>0 && n>=1)
	{
		for(int i=1;i<n;i++)
		{
			f=f+pow(x,i)/(i+1)+1;
		}
		printf("F=%f",f);
	}else
	{
		f=pow(x,3)+2*n;
		printf("F=%f",f);
	}
}
int main()
{
	float x;
	int n;
	nhap(x,n);
	F(x,n);
}
