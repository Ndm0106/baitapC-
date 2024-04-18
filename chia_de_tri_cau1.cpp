#include<bits/stdc++.h>
using namespace std;

int pow(int a, int n)
{
    if(n == 1) {
        return a;
    } else 
	{
        int temp = pow(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}
int main()
{
	int a;
	int n;
	cout<<"nhap a: ";cin>>a;
	cout<<"nhap n: ";cin>>n;
	int d=pow(a,n);
	cout<<d;
}
