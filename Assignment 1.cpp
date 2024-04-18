#include<bits/stdc++.h>

using namespace std;

class Sanpham
{
    char msp[20],tsp[50];
    int sl,dg,tt;
    public:
        void nhap()
        {
            fflush(stdin);
            cout<<"ma san pham: ";gets(msp);
            fflush(stdin);
            cout<<"ten san pham: ";gets(tsp);
            cout<<"so luong: ";cin>>sl;
            cout<<"don gia: ";cin>>dg;
            tt=sl*dg;
        }
        void xuat()
        {
            cout<<msp<<"\t\t"<<tsp<<"\t\t"<<sl<<"\t\t"<<dg<<"\t\t"<<tt<<"\n";
        }
        friend class phieu;
};
class phieu
{
    char mp[20],mncc[50],tncc[100],dc[100];
    int ngay,thang,nam,sdt,n,s;
    Sanpham *sp;
    Sanpham spt;
    public:
        void nhap()
        {
             fflush(stdin);
			 cout<<"ma phieu: ";gets(mp);
			 fflush(stdin);
			 cout<<"ma nha cung cap: ";gets(mncc);
			 fflush(stdin);
			 cout<<"ten nha cung cap: ";gets(tncc);
			 fflush(stdin);
			 cout<<"dia chi: ";gets(dc);
			 cout<<"ngay lap: ";cin>>ngay>>thang>>nam;
			 cout<<"so dien thoai lien he: ";cin>>sdt;
			cout<<"so loai san pham: ";cin>>n;
			sp=new Sanpham[n];
			for(int i=0;i<n;i++)
			{
				cout<<"nhap san pham "<<i+1<<" : \n";
				sp[i].nhap();
			}
        }
        void xuat()
        {
        	s=0;
        	cout<<"\ndai hoc victory\n";
        	cout<<"                   phieu nhap van phong pham                      \n";
        	cout<<"ma phieu:     "<<mp<<"        ngay lap:   "<<ngay<<"/"<<thang<<"/"<<nam<<"\n";
        	cout<<"ma nha cung cap:  "<<mncc<<"      ten nha cung cap: "<<tncc<<"\n";
        	cout<<"dia chi:  "<<dc<<"      sdt:   "<<sdt<<"\n";
        	cout<<"ma sp    ten san pham    so luong    don gia   thanh tien\n";
        	for(int i=0;i<n;i++)
        	{
        		sp[i].xuat();
                s=s+sp[i].tt;
        	}
        	cout<<"    tong:                                          "<<s;
        }
        void tim()
        {
        	int dem=0;
        	for(int i=0;i<n;i++)
        	{
        		if(sp[i].sl<80)
        		{
        			dem++;
        		}
        	}
        	cout<<"\n\nso san pham co so luong nho hon 80 la : "<<dem;
        }
        void xapxep()
        {
        	for(int i=0;i<n;i++)
        	{
        		for(int j=i+1;j<n;j++)
        		{
        			if(sp[i].dg<sp[j].dg)
        			{
        				spt=sp[i];
        				sp[i]=sp[j];
        				sp[j]=spt;
        			}
        		}
        	}
        }
};
int main()
{
	phieu p;
	p.nhap();
	p.xuat();
	p.tim();
	p.xapxep();
	cout<<"\nphieu sau khi xap xep la \n";
	p.xuat();
}
