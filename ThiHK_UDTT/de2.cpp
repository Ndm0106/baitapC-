#include <bits/stdc++.h>
using namespace std;

struct SanPham{
	string maSp;
	string tenSp;
	int khoiLuong;
	int giaTri;
};

SanPham d[9] = {
	{"SP0011","Dien Thoai Apple Iphone 11",5, 5},
	{"SP0022","Dien Thoai Apple Iphone 13",5, 5},
	{"SP0033","Dien Thoai Oppo",5, 5},
	{"SP0044","Dien Thoai Realme",5, 5},
	{"SP0055","Dien Thoai Samsung",5, 5},
	{"SP0066","Samsung Zflip 2",5, 5},
	{"SP0077","Samsung Zflip 3",5, 5},
	{"SP0088","Samsung Zflip 4",5, 5},
	{"SP0099","Ti vi LG 4K",5, 5},
};

int divide_and_conqueror(SanPham d[], int n, SanPham sp){
	int start = 0;
	int end = n - 1;
	string ten = sp.tenSp;
	while(start <= end){
		int m = (start + end)/2;
		if(d[m].tenSp.compare(ten) <= 0 && d[m+1].tenSp.compare(ten) >= 0){
			return m;
		} else {
			if(d[m].tenSp.compare(ten) > 0){
				end = m - 1;
			} else {
				start = m + 1;
			}
		}
	}
	
	return end + 1;
}

int do_dai_xau_con(string a, string b){
	int n = a.length();
	int m = b.length();
	
	int L[n + 1][m + 1];
	
	for(int i = 0; i <= n; i++) {
		L[i][0] = 0;
	}
		
	for(int j = 0; j <= m; j++){
		L[0][j] = 0;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i-1] == b[j-1]){
				L[i][j] = L[i-1][j-1] + 1;
			} else{
				L[i][j] = max(L[i-1][j], L[i][j-1]);
			}	
		}
	}
		
	return L[n][m];
}

void kiem_tra_giong_nhau(string tensp){
	for(int i = 0; i < 8 ; i++){
		if(do_dai_xau_con(tensp, d[i].tenSp) >= 10){
			cout<<d[i].maSp<<" ";
		}
	}
}

string to_upper(string tensp){
	for(int i = 0 ; i < tensp.length() ; i++){
		if(tensp[i] <= 122 && tensp[i] >= 97){
			tensp[i] -= 32;
		}
	}
	
	return tensp;
}

bool thuat_toan_z(string tensp, string key){
	tensp = to_upper(tensp);
	string s = key + "$"+ tensp;
	int n = s.length(), l = 0, r = 0;
	int z[n];
	
	for(int i = 1; i < n; i++){
		if(i > r){
			l = r = i;
			while(r < n && s[r - l] == s[r]){
				r++;
			}
			z[i] = r - l;
			r--;
		}
		else {
			if(z[i - l] < r - i + 1){
				z[i] = z[i - l];
			} else{
				l = i;
				while(r < n && s[r - l] == s[r]){
					r++;
				}
				z[i] = r - l;
				r--;
			}
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		
		if(z[i] == key.length()){
			return true;
		}
	}
	
	return false;
}

int main(){
	int n = 9;
	
	SanPham sp = {"SP0045","Dien Thoai Apple Iphone 12",5, 5};
	
	cout<<divide_and_conqueror(d, n, sp);
	cout<<"Cac san pham giong voi san pham co ma SP0088 la: ";
	for(int i = 0; i < n ; i++){
		if(d[i].maSp.compare("SP0088") == 0){
			kiem_tra_giong_nhau(d[i].tenSp);
		}
	}
		
	cout<<endl;
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		if(thuat_toan_z(d[i].tenSp, "TI VI")){
			count++;
		}
	}
	if(count == 0){
		cout<<"Trong danh sach khong co san pham ti vi"<<endl;
	} else {
		cout<<"Trong danh sach co "<<count<<" san pham ti vi"<<endl;
	}

}
