#include<bits/stdc++.h>
using namespace std;

void nhapchuoi(char s[])
{
	fflush(stdin);
	printf("nhap chuoi: ");
	gets(s);
}
void demkitu(char s[],char c)
{
	int i,dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==c)
		{
			dem=dem+1;
		}
	}
	printf("ki tu xuat hien %d lan",dem);
}
void xuatchuoi(char s[])
{
	printf("chuoi s la %s ",s);
}
int main()
{
	char s[100],c;
	nhapchuoi(s);
	xuatchuoi(s);
	fflush(stdin);
	printf("\nnhap 1 ki tu: ");
	scanf("%s",&c);
	demkitu(s,c);
}
