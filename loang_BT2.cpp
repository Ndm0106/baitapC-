#include<bits/stdc++.h>
using namespace std;
int so_mien=0;

bool flag[12][12];
void loang(int i,int j,int a[][12])
{
	flag[i][j]=true;
	if(a[i-1][j]==a[i][j] && !flag[i-1][j] &&i>0)
	{
		loang(i-1,j);
	}
	if(a[i+1][j]==a[i][j] && !flag[i+1][j] && i<11)
	{
		loang(i+1,j);
	}
	if(a[i][j-1]==a[i][j]&&(!flag[i][j-1])&&j>0)
	{
		loang(i,j-1);
	}
	if(a[i][j+1]==a[i][j] && !flag[i][j+1] &&j<11)
	{
		loang(i,j+1);
	}
}
int main()
{
	int a[12][12]
    for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			a[i][j]=rand()%6;
			flag[i][j]=false;
		}
	}
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			if(!flag[i][j]&&a[i][j]=5)
			loang(i,j,a);
			so_mien++;
		}
	}
	cout<<"so mien lien thong: "<<so_mien;
}

