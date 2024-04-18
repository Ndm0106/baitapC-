#include<bits/stdc++.h>
using namespace std;

void nhapchuoi(char s[])
{
	fflush(stdin);
	printf("nhap chuoi: ");
	gets(s);
}
char xoa(char s[],int vt)
{
	int n=strlen(s);
	for(int i=vt;i<n;i++)
	{
		s[i]=s[i+1];
	}
	s[n-1]='\0';
}
void xoadaudong(char s[])
{
	while(s[0]==' ')
	{
		xoa(s,0);
	}
}
void xoacuoidong(char s[])
{
	while(s[strlen(s)-1]==' ')
	{
		xoa(s,strlen(s)-1);
	}
}
void chuanhoa(char s[])
{
	int n=strlen(s);
	if (s[0] != 32)
    {
        if (s[0] >96 && s[0]< 123)
        {
            s[0] -= 32;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 32)
        {
            if (s[i + 1]> 96 && s[i + 1] < 123)
            {
                s[i + 1] -= 32;
            }
        }
    }
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
	xoadaudong(s);
	xoacuoidong(s);
	chuanhoa(s);
	printf("\nchuoi sau khi chuan hoa: %s",s);
}
