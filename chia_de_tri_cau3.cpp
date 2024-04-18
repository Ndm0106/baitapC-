#include<bits/stdc++.h>
using namespace std;
void Min(char a[],int l, int r,int &min) {
	int min1, min2;
	if (l == r) {
		min = a[l];
	}
	else {
		int mid = (l + r) / 2;
		min1 = l, 
		min2 = mid + 1, 
		Min(a, l, mid,min1);
		Min(a, mid + 1, r,min2);
		if (min1 < min2) {
			min = min1;
		}
		else {
			min = min2;
		}
	}
}
int main() 
{
	char a[]="understand,how,to,create,your,own,python,programs";
	n=a.length();
	mang(a,n);
	int min = a[0];
	Min(a, 0, 4,min);
	cout <<"min: "<<min;

}
