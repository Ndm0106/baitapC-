#include<bits/stdc++.h>
using namespace std;

const int n=10;
float a[n]={213465.34,127893.32,345793,623189,321378,
           910393,1132345,812383,931039,532345};
float tinh_tong(float a[],int i)
{
	if(i==-1)
	{
		return 0;
	}
	if(a[i]>0)
	{
		return a[i]+tinh_tong(a,i-1);
	}
}
void hien_thi(float a[],int n)
{
	if(n==0)
	{
		return;
	}
	cout<<a[n]<<"\t";
	hien_thi(a,n-1);
}
float dem_mang(float a[],int i)
{
	if(i==-1)
	{
		return 0;
	}
	if(a[i]>0)
	{
	    return dem_mang(a,i-1)+1;
    }
}

int main()
{
	hien_thi(a,n-1);
	cout<<endl;
	cout<<"trung binh cong la: "<<tinh_tong(a,n-1)/dem_mang(a,n-1);
}
	
