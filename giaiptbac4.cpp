#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
void pt(float a,float b,float c)
{
	float x1,x2,x,x3,x4;
	float delta;
	delta=b*b-4*a*c;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("\nvô lí");
				break;
			}
		}
		else	
		{
			if(c<0)
			{
				printf("\n phuong trinh vo nghiem");
				break;
			}
			else
			{
				x=c/b;
				printf("\n nghiem x=%f",x);
				break;
			}
		}
	}else
	{
		if(b==0)
		{
			if(c==0)
			{
				x=0;
				printf("\nnghiem x=%f",x);
				break;
			}
			if(c!=0)
			{
				if(c<0)
				{
					printf("\nphuong trinh vo nghiem");
					break;
				}
				if(c>0)
				{
				   x1=sqrt(sqrt(c/a));
				   x2=-sqrt(sqrt(c/a));
				   printf("\nnghiem x1=%2f",x1);
				   printf("nghiem x2=%f",x2);
				   break;
				}
			}
		}
		else
		{
			if(c==0)
			{
				x1=0;
				printf("\nnghiem x1=%2f",x1);
				break;
				if(b<0)
				{
					printf("\nnghiem x2 khong thoa man");
					break;
				}else
				{
					x2=sqrt(b/a);
					x3=-sqrt(b/a);
					printf("\nnghiem x2=%f",x2);
					printf("nghiem x3=%f",x3);
					break;
				}
			}else
			{
				if(delta<0);
				{
					printf("\nphuong trinh vo nghiem");
					break;
				}
				    if(delta == 0)
				    {
					    if(b<0);
					    {
						printf("\nphuong trinh vo nghiem");
						break;
					    }
						if(b>0)
					    {
						    printf("\nphuong trinh co 4 nghiem ");
						    x1=sqrt(b/(2*a));
						    x2=-sqrt(b/(2*a));
						    x3=sqrt(b/(2*a));
						    x4=sqrt(b/(2*a));
						    printf("\nnghiem x1=%f",x1);
						    printf("\nnghiem x2=%f",x2);
						    printf("\nnghiem x3=%f",x3);
						    printf("\nnghiem x4=%f",x4);
						    break;
				 	    }
					}
					else
				    {
					printf("\nphuong trinh co 4 nghiem");
					x1=sqrt((-b+sqrt(delta))/(2*a));
					x2=-sqrt((-b+sqrt(delta))/(2*a));
					x3=sqrt((-b-sqrt(delta))/(2*a));
					x4=-sqrt((-b-sqrt(delta))/(2*a));
					printf("\nnghiem x1=%f",x1);
					printf("\nnghiem x2=%f",x2);
					printf("\nnghiem x3=%f",x3);
					printf("\nnghiem x4=%f",x4);
					break;
				    }
				}
			}
		}
	}
int main()
{
	float a,b,c;
	printf("nhap a: ");scanf("%f",&a);
	printf("nhap b: ");scanf("%f",&b);
	printf("nhap c: ");scanf("%f",&c);
	pt(a,b,c);
}	
