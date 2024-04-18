#include<bits/stdc++.h>
using namespace std;
int *C={10,5,1};
int *S;
bool C_A(int *C,int m,long n,int *S)
{
	
	S[i]=0;
	i=0;
	while(n>0 && i<m)
	{
		S[i]=n/C[i];
		n=n%C[i];
		i++;
	}
	if(n>0)
	{
		return false;
	}
	return true;
}
int main()
{
	int *C={10,5,1};
    int *S;
	long n;
	cout<<"nhap n: "; cin>>n;
	if(C_A(C,3,n,S))
	{
		
	

