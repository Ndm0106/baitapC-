#include<bits/stdc++.h>
using namespace std;

struct sanpham
{
	char masp[10];
	string tensp;
	int khoiluong;
	int giatri;
};
sanpham d[7]={
	{"SP01","ban",14,3000},
	{"SP01","dien thoai",1,10000},
	{"SP01","ghe",12,2000},
	{"SP01","may tinh bang",20,7100},
	{"SP01","may giat",23,5200},
	{"SP01","tivi",5,5000},
	{"SP01","tu lanh",10,6500},
};
/*int chen(sanpham d[],int l,int r,int vt,sanpham x[])
{
	int mid=(l+r)/2;
	if(l>r)
	{
		return;
	}
	x=d[l];
	vt=l;
	while(vt>0 && d[vt-1]>x)
	{
		d[vt]=d[vt-1];
		vt--;
	}
	d[vt]=x;
}*/
int char_in_string(char c, string p){
    for(int i=0; i<p.length(); i++){
        if(p[i] == c)
            return i;
    }
    return -1;
}
sanpham Boyer_Moore_Horspool(string t){
	string p="tivi";
    int dem = 0, i = p.length(), v = p.length();
    while(i<t.length()){
        int x = v-1, j=i-1;
        while(t[j] == p[x] && x > -1){
            j--; x--;
        }
        if(x<0){
            dem++;
            i = i+v;
        }
        else{
            x = char_in_string(t[j], p);
            if(x<0)
                i= i+v;
            else
                i=i+v-x-1;
        }
    }
    return dem;
}
bool kiemtra_tivi()
{
	for(int i=1;i<7;i++)
	{
		if(Boyer_Moore_Horspool(d[i].tensp)<0)
		{
			return false;
		}
	}
	return true;
}
		
int main()
{
	if(kiemtra_tivi())
	{
		cout<<" khong co san pham tivi";
	}
	else
	{
		cout<<"co san pham tivi";
	}
}
