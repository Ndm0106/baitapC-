#include<bits/stdc++.h>
using namespace std;

int n=6; 
int m=12;
int w[7] = {3, 6, 2, 7, 1, 5};
int v[7] = {4, 3, 2, 5, 1, 6};
int **F;

void algorithm(){
	for (int j = 0; j <= m; j++)
	{ 
		F[0][j] = 0; 
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++) 
		{
			F[i][j] = F[i-1][j]; //Khong lay goi thu i
			int temp = F[i-1][j-w[i]] + v[i];
			if (w[i] <= j && F[i][j] < temp) //Lay goi thu i
			{
				F[i][j] = temp;
			}
		}
	}
}

void result(){
	cout<<"Max value: " << F[n][m] << endl;
	int i = n; 
	int j = m;
	while (i != 0) {
		if (F[i][j] != F[i-1][j]) 
		{
			cout<<i<<" ";
			j = j - w[i]; //Lay goi thu i
		}
		i--;
	}
}

int main(){
	F = new int*[n];
	for(int i=0; i<=n; i++)
	{
		F[i] = new int[m];
	}
	algorithm();
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			cout<<setw(5)<<F[i][j]<< " ";
		}
		cout<<endl;
	}
	result();
}

