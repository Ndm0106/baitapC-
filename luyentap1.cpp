#include<bits/stdc++.h>
using namespace std;
int tongS(int n)
{
	int i=1,F=1,S;
	for(i=i;i<=n;i++)
	{
		F=F*i;
		S=S+F;
	}
	return S;
}

int main()
{
	int n;
	do
	{
		printf("nhap n: ");
	    scanf("%d",&n);
	}while(n<5 || n>100);
	printf("tong S la %d",tongS(n));
} 
