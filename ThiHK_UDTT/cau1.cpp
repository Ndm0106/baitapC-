//cau 1
#include<bits/stdc++.h>
using namespace std;

const int n = 10;

int a[n] = {120000, 109000, 100001, 103400, 323342,
 			434990, 432459, 435212, 346545, 543567};
			 
int dem(int a[], int i){
	if(i==-1)
		return 0;
	if(a[i] % 2 != 0)
		return 1 + dem(a, i-1);
	return dem(a, i-1);
	
}

int sum(int a[], int i){
	if(i==-1)
		return 0;
	if(a[i] % 2 != 0)
		return a[i] + sum(a, i-1);
	return sum(a, i-1);
}

void display(int a[], int n){
	if(n==-1)
		return;
	display(a, n-1);
	cout<<a[n]<<setw(10);
}	

main(){
	display(a, n-1);
	cout<<"\nTrung binh cong cac so le trong mang a la: "<<sum(a, n-1)/dem(a, n-1);
}
