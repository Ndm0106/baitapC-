#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int m=5;
int n=5;
int f[6][6]= 
 {1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0};
int analys01()
{
    for (int i = 1; i <= m; i++) 
    {
        for (int j = 0; j <= n; j++)
		{
            if(j < i) 
			{
                f[i][j] = f[i-1][j];
            }
            else 
			{
                f[i][j] = f[i-1][j] + f[i][j-i];
            }
        }
    }
    return f[n][n];
}
		
int main()
{
	int x=analys01();
	cout<<x<<endl;
	for(int i=0; i<6;i++)
	{
		for (int j=0; j<6;j++)
		{	
		    cout<<f[i][j]<<"  ";
		}
		cout<<endl;
	}
}
