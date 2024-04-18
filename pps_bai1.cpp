#include<bits/stdc++.h>
using namespace std;
void next_config(int x[], int n, int i){
	x[i] = 1;
	i ++;
	while (i <= n){//Dat x[i+1], …, x[n] = 0
		x[i] = 0;
	i ++;
	}
}
//Hien thi mot cau hinh
void view_config(int x[], int n){
	for (int i = 1; i <= n; i++)
		if(x[i]==0)
			cout<<"a";
		else
			cout<<"b";
	cout<<endl;
}	
void listing_configs(int n){
	int i;
	int x[n + 1] = {0}; //Cau hinh dau tien {00…0}
	do {
		view_config(x, n); //In m?t c?u hình
		i = n;
		while (i > 0 && x[i] == 1) {
			i --;
		}
		if (i > 0) { //Chua phai cau hinh cuoi
			next_config(x, n, i);
		}
	} while (i > 0);
}
int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
	listing_configs(n);
}
