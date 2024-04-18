#include<bits/stdc++.h>
using namespace std;
void nhaptho(char tho[][80],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap cau thu %d ",i+1);
		fflush(stdin);
		gets(tho[i]);
	}
}

void xuattho(char tho[][80],int n)
{
	for(int i=0;i<n;i++)
	{
	    printf("\n%s",tho[i]);
	}
}
void cauthothu1(char tho[][80],int n)
{
	char c[100];
	for(int i=0;i<n;i++)
	{
		strcpy(c,tho[0]);
	}
	printf("%s",c);
}
int main()
{
	char tho[100][80];
	int n;
	do
	{
	printf("nhap so cau: ");
	scanf("%d",&n);
	}while(n>10);
	nhaptho(tho,n);
	xuattho(tho,n);
	cauthothu1(tho,n);
}
	
	
