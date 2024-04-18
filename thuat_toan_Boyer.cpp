#include<bits/stdc++.h>
using namespace std;
char T[40]="mothaibabonnamsaubay";
char P[10]="namsau";
int char_in_string(char n,char a[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==n)
		{
			return i;
		}
	}
}
int Boyer_Moore_Horspool() 
{
    int dem = 0, i = strlen(P), v = strlen(P);
    while (i < strlen(T)) 
	{
        int x = v - 1, j = i - 1;
        while (T[j] == P[x] && x > -1)
		{
            j--; x--;
        }
        if (x < 0) 
		{ 
		    dem++; i = i + v; 
		}
        else 
		{
            x = char_in_string(T[j], P);
            if (x < 0) i = i + v;
            else i = i + v - x - 1;
        }
    }
    return dem;
}
int main()
{
	int dem=Boyer_Moore_Horspool();
	if(dem>0)
	{
		cout<<"\n P la con cua T"<<endl;
	}
	else
	{
		cout<<"\n P khong phai la con cua T"<<endl;
	}
}
