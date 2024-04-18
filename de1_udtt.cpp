#include<bits/stdc++.h>
using namespace std;

struct hocsinh
{
	string ten;
	float diemtb;
	int tienht;
};
void them(hocsinh *a, int n)
{
	
	a[0].ten="manh";a[0].diemtb=7;a[0].tienht=120000;
	a[1].ten="thanh";a[1].diemtb=7.7;a[1].tienht=90000;
	a[2].ten="kien";a[2].diemtb=8;a[2].tienht=200000;
	a[3].ten="duy";a[3].diemtb=6;a[3].tienht=340000;
	a[4].ten="loi";a[4].diemtb=5.5;a[4].tienht=600000;
	a[5].ten="tu";a[5].diemtb=9;a[5].tienht=490000;
	a[6].ten="hoai";a[6].diemtb=7.1;a[6].tienht=910000;
}
//hien thi nguoc
void hienthi(hocsinh *a,int n)
{
	if(n==0)
	{
		cout<<"\t";
	}
	else
	{
	    cout<<"\nten:"<<a[n-1].ten<<"\t"<<"diemtb:"<<a[n-1].diemtb<<"\t"<<a[n-1].tienht;
	    hienthi(a,n-1);
	}
}
//hien thi xuoi
/*void hienthi(hocsinh *a,int n,int i)
{
	if(n==0 || n==i)
	{
		cout<<"\t";
	}
	else
	{
	    cout<<"\nten:"<<a[i].ten<<"\t"<<"diemtb:"<<a[i].diemtb<<"\t"<<a[i].tienht;
	    hienthi(a,n,i+1);
	}
}
*/	
int main()
{
	int i=0,n=7;
	hocsinh *a;
	a = new hocsinh[7];
	them(a,n);
	//hien thi nguoc
	hienthi(a,n);
	//hien thi xuoi
	//hienthi(a,n,i);
}
	

	
	
