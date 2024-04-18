#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float x;
	float f=abs(x);
	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap n: ");
	scanf("%d",&n);
	int T=1;
	float S=0;
	int M=0;
	for(int i=1;i<=n;i++)
	{
		f=f+pow(x,i)/i;
	}
	f=f+1;
	printf("F=%f",f);
}
