#include<bits/stdc++.h>
using namespace std;

struct tai_san
{
	string tentaisan;
	int sltaisan;
};

tai_san d[10]={
	{"ban",2},
	{"choi",5},
	{"dieu hoa",3},
	{"ghe",2},
	{"may bom",5},
	{"may giat",2},
	{"tivi",1},
	{"tu lanh",2},
	{"xe may",3},
	{"xe dap",2},
};
int dem_sl=0;
void thuat_toan(int m)
{
	int i=0;
	while(m>0)
	{
		dem_sl++;
		m=m-d[i].sltaisan;
		i++;
	}
}
int main()
{
	int p=15;
	thuat_toan(p);
	cout<<"can it nhat "<<dem_sl<<" tai san trong d de tong so luong lon "<<p;
}
	
