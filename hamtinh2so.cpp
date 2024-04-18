#include<stdio.h>
#include<conio.h>

void nhapkitu()
{
	char kitu[1];
	printf("nhap ki tu: ");
	gets(kitu);
	fflush(stdin);
	do
	{
		printf("ki tu khong hop le, yeu cau nhap lai");
	}while(kitu[1]=='+'&&kitu[1]=='-'&&kitu[1]=='*'&&kitu[1]=='/');
	return kitu;
}
void nhapso()
{
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
}
float F(int a, int b)
{
	float kq;
	if(kitu=='+')
	{
		kq=a+b;
	}else
	{
		if(nhapkitu()='-')
		{
		    kq=a-b;
		    
		}else
		{
			if(nhapkitu()='*')
			{
				kq=a*b;
				
			}else{
				if(b==0)
				{
					printf("khong the chia cho 0");
					return 0;
				}else
				{
					kq=a/b;
				}
			}
		}
	}
	return kq;
}
void hienthi(float F(int a,int b))
{
	printf("ket qua phep tinh la %f",F(int a,int b);
}
int main()
{
	int a,b;
	nhapkitu();
	a=nhapso();
	b=nhapso();
}
	
