#include<bits/stdc++.h>
using namespace std;

int const a=17;
int const b=5;
char xaumh[100];

char *mahoa(){
	char s[100];
	int n=strlen(xaumh);
	for(int i=0;i<n;i++)
	{
		s[i]=65+(xaumh[i]-65+b)%26;
	}
	s[n]=NULL;
	return &s[0];
}
/*char *giaima()
{
	char s[100];
	int n=strlen(xaugm);
	for(int i=0;i<n;i++)
	{
		s[i]=65+(xaugm[i]-k-65+26)%26;
	}
	s[n]=NULL;
	return &s[0];
}*/
int main()
{
	char mh[100];
	xaumh[strlen(xaumh)-1]=NULL;
	printf("nhap ban ro: ");
	scanf("%s",&mh);
	strcpy(mh,mahoa());
	printf("%s ma hoa dc %s",mahoa,mh);
	return 0;
}
