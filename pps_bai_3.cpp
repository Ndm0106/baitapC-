#include<bits/stdc++.h>
using namespace std;

// dao gia tri hai ptu
void swap(int &a, int &b){
	int tg = a;
	a= b;
	b = tg;
}

//Hien thi mot cau hinh
void view_config(int x[], int n){
	for (int i = 1; i <= n; i++)
		if(x[i]==1){
			cout<<"tam\t";
		}
		else if(x[i]==2){
			cout<<"toan\t";
		}
		else if(x[i]==3){
			cout<<"trang\t";
		}
		else if(x[i]==4){
			cout<<"cong\t";
		}
		else if(x[i]==5){
			cout<<"trung\t";
		}
		else cout<<"tu\t";
		cout<<endl;
	}

//Sinh cau hinh moi tu cau hinh dang co
void next_config(int x[], int n, int i){
//Tim x[k] be nhat trong doan cuoi l?n hon x[i]
	int k = n;
	while (x[k] < x[i]){
		k--;
		}
//Dao gia tri x[i] va x[k]
		swap(x[i], x[k]);
//Dao nguoc doan cuoi
		int j = n; i++;
		while (i < j) {
			swap(x[i], x[j]); i++; j--;
		}
	}

void listing_configs(int n){
	int i, x[n + 1] = {0};
//Cau hinh dau tien {1 2 … n}
	for (i = 1; i <= n; i++) { x[i] = i; }
		do {
		view_config(x, n); //In mot cau hinh
//Tim phan tu lien truoc doan cuoi giam dan
			i = n - 1;
			while (i > 0 && x[i] > x[i + 1]) i --;
			if (i > 0) { //Chua phai cau hinh cuoi
				next_config(x, n, i);
				}
			} while (i > 0);
		}

int main(){
	int n;
	cout<<"do dai day S, n= ";cin>>n;
	listing_configs(n);
}		



