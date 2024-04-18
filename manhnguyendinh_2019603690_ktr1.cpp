#include<bits/stdc++.h>
#define MAX 100
using namespace std;
struct chuyenbay
{
	string sohieu;
	int giave;
	int soghengoi;
};

chuyenbay a[7]={
	{"VN001",70000,12},
	{"VN002",77000,9},
	{"VN003",80000,6},
	{"VN004",60000,4},
	{"VN005",55000,6},
	{"VN006",90000,49},
	{"VN007",71000,91},
};
int tinhtong(int n)
{
	if( n==-1)
	{
		return 0;
	}
	return a[n].giave + tinhtong(n-1);
}
int n=7;

int socb(int p){
    int d = 0;
    int i = n-1;
    while(i >= 0)
	{
        if(a[i].soghengoi <= p)
		{
            p = p - a[i].soghengoi;
            d = d + 1;
        }
        i--;
    }
	return d;
}


int main()
{	
    cout<<"tong gia ve: "<<tinhtong(n);
    int p=30;
    cout<<"\ncan it nhat "<<socb(p)<<" chuyen bay de cho dc "<<p<<"khach";
   
}
