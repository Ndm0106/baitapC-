#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapso(float &x,int &n)
{
	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap n: ");
	scanf("%d",&n);
}
float F(float &x,int &n)
{
	float f=abs(x);
	if(n>=1 && x>2)
	{
		for(int i=1;i<=n;i++)
	    {
		    f=f+pow(x,i)/i;
	    }
	    f=f+1;
		printf("F=%f",f);
	}
	else
	{
		f=pow(x,3)+2*n;
		printf("F=%f",f);
	}
}
int main()
{
	float x;
	int n;
	nhapso(x,n);
	F(x,n);
}
