#include<stdio.h>
#include<conio.h>

int main()
{
	char k;
	int a,b;
	printf("nhap phep toan: ");
	scanf("%c",&k);
	printf("nhap a va b: ");
	scanf("%d%d",&a,&b);
	switch(k)
	{
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case  '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case'*':
			printf("%d * %d = %d",a,b,a*b);
		case'/':
			if(b==0)
			{
				printf("khong chia duoc cho 0");
				break;
			}else{
				float kq;
				printf("%d / %d =%f",a,b,kq=a/b);
				break;
			}
		default:
		printf("\nkhong co phep toan %c",k);
		break;
	}
}
