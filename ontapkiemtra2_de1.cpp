#include<bits/stdc++.h>
using namespace std;

struct goihang
{
	string magoi;
	double khoiluong;
	int giatien;
};
goihang d[7]={
	{"GH001",50.1,20000},
	{"GH002",35.6,55000},
	{"GH003",46.7,30000},
	{"GH004",90,40000},
	{"GH005",22.4,60000},
	{"GH006",39.6,80000},
	{"GH007",75.5,62000},
};
int search(goihang d[],int l,int r,string x)
{
	if(r>=l)
	{
	int mid=l+(r-l)/2;
	//if(strcmp(d[mid].magoi,x)==0)
	if(d[mid].magoi.compare(x)==0)
		return mid;
	//if(strcmp(d[mid].magoi,x)!=0)
	else
	{
	    if(d[mid].magoi.compare(x)>0)
	    {
	        return search(d,l,mid-1,x);
	    }else{
	        return search(d,mid+1,r,x);
	    }
	}
	return -1;
    }
}
int char_in_string(char c, string P){
    for(int i = 0 ; i < P.length() ; i++){
        if(P[i] == c){
            return i;
        }
    }
}
int Boyer_Moore_Horspool(string T){
    string P = "H00";
      int dem = 0, i = P.length(), v = P.length();
      
      while (i <= T.length()) {
        int x = v - 1, j = i - 1;
        while (T[j] == P[x] && x > -1) {
          j--;
          x--;
        }
        
        if (x < 0) {
            dem++;
            i = i + v;
        } else {
            x = char_in_string(T[j], P);
            if (x < 0) {
                i = i + v;
            } else {
                i = i + v - x - 1;
            }
        }
      }
      
      return dem;
}
bool kiemtra(){
    /*for(int i = 0 ; i < 6 ; i++){
        if(Boyer_Moore_Horspool(d[i].magoi) > 0){
            return false;
        }
    }
    return true;*/
    for(int i = 0 ; i < 6 ; i++){
        if(Boyer_Moore_Horspool(d[i].magoi) < 0){
            return true;
        }
    }
    return false;
}
int main()
{
	string x="GH002";
	int kq=search(d,0,6,x);
	if(kq==-1)
	{
		cout<<"khong tim thay vi tri cua "<<x<<" trong danh sach";
	}
	cout<<"vi tri cua goi hang "<<x<<" trong chuoi la "<<kq+1<<endl;
	if(kiemtra())
	{
		//cout<<"tat cac ma deu chua H00"<<endl;
		cout<<"cac ma khong hoan toan chua H001"<<endl;
	}else
	{
		//cout<<"cac ma khong hoan toan chua H001"<<endl;
		cout<<"tat cac ma deu chua H00"<<endl;
	}
}
