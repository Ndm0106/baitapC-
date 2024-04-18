#include<bits/stdc++.h>
using namespace std;

struct hocsinh
{
	string hovaten;
	int tuoi;
	float diemtongket;
};
hocsinh a[7]={
	{"Nguyen Dinh Manh",19,9.2},
	{"Nguyen Dinh Thanh",25,7.7},
	{"Dao Van Loi",10,6.5},
	{"Tran Ngoc Duong",16,8.1},
	{"Nguyen Van Hung",17,7.3},
	{"Nguyen Anh Hung",21,9.2},
	{"Nguyen Cong Hoang",26,9.8},
};
hocsinh timkiem(hocsinh a[],int left,int right)
{
	if(right==left)
	{
		return a[left];
	}
	else
	{
		int mid=(right+left)/2;
	    hocsinh hs1=timkiem(a,left,mid);
		hocsinh hs2=timkiem(a,mid+1,right);
		if(hs1.diemtongket>hs2.diemtongket)
		{
			return hs1;
		}else{
			return hs2;
		}
	}
}

int main()
{
	hocsinh x=timkiem(a,0,6);
	cout<<"hoc sinh co diem tong ket lon nhat "<<x.hovaten;
}
