#include<bits/stdc++.h>
using namespace std;

void next_config(int x[], int k, int i)
{
    x[i] += 1;
    i++;
    while (i <= k)
    {
        x[i] = x[i - 1] + 1;
        i++;
    }
}

void view_config(int x[], int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout<<x[i];
    }
cout<<endl;
}
void ds_configs(int k, int n)
{
    int i, x[k + 1];
    for (i = 1; i <= k; i++) 
    { 
        x[i] = i;
    }
    do 
    {
        view_config(x, k);
        i = k;
        while (i > 0 && x[i] == n - k + i)
        {
            i--;
        }
        if (i > 0)
		{
            next_config(x, k, i);
        }
    }while (i > 0);
}
int main()
{
	int n,k;
	cout<<"nhap day S: ";
	cin>>n;
	cout<<"nhap day con k: ";
	cin>>k;
	ds_configs(k,n);
}
	
