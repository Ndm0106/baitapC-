#include<bits/stdc++.h>
using namespace std;

int so_mien=0;
int a[3][5] = 
{
	{ 1, 1, 0, 0, 0},  //row 1
	{ 0, 1, 1, 0, 1}, //row 2
	{ 1, 1, 1, 0, 1 }  //row 3
};
bool flag[3][5];
void loang(int i,int j);	
void loang(int i,int j)
{
	flag[i][j]=true;
	if(a[i-1][j]==a[i][j] && !flag[i-1][j] &&i>0)
	{
		loang(i-1,j);
	}
	if(a[i+1][j]==a[i][j] && !flag[i+1][j] && i<2)
	{
		loang(i+1,j);
	}
	if(a[i][j-1]==a[i][j]&&(!flag[i][j-1])&&j>0)
	{
		loang(i,j-1);
	}
	if(a[i][j+1]==a[i][j] && !flag[i][j+1] &&j<4)
	{
		loang(i,j+1);
	}
}
int main()
{
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			flag[i][j]=false;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(!flag[i][j])
			loang(i,j);
			so_mien++;
		}
	}
	cout<<"so mien lien thong: "<<so_mien;
}
	
	
	
