#include<bits/stdc++.h>
using namespace std;

//sinh cau hinh moi tu cau hinh dang co
void next_config(int x[], int k, int i){
	x[i] += 1;
	i ++;
	while (i <= k){//x[i+1], …, x[k] = can duoi
	x[i] = x[i-1] + 1;
	i ++;
	}
}

//hien thi 1 cau hinh
void view_config(int x[], int k){
	for (int i = 1; i <= k; i++)
		cout<<x[i];
		cout<<endl;
}

//Liet ke cac cau hinh
void listing_configs(int k, int n){
	int i, x[k + 1] = {0};
//Cau hinh dau tien {1 2 … k}
	for (i = 1; i <= k; i++) { x[i] = i; }
		do {
			view_config(x, k); //In m?t c?u hình
//Tim phan tu dau tien chua dat gh tren
			i = k;
		while (i > 0 && x[i] == n - k + i)
			i --;
		if (i > 0) { //Chua phai cau hinh cuoi
			next_config(x, k, i);
			}
		} while (i > 0);
}


int main(){
	int n, k;
	cout<<"do dai day S, n= ";cin>>n;
	cout<<"do dai day con, k =";cin>>k;
	listing_configs(k, n);
}
