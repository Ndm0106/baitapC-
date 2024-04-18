#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,sl=0;
	for(a=0;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				if(a*1000+b*2000+c*5000==10000)
				{
					printf("%d to 1000, %d to 2000, %d to 5000",a,b,c);
					printf("\n");
					sl++;
				}
			}
		}
	}
	printf("so phuong an la %d",sl);
}
