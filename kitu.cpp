#include<bits/stdc++.h>
using namespace std;

int kitu(char *xau)
{
	int dem=1,j,temp;
    for(int i=1;i<strlen(xau);i++)
	{
	    if(xau[i] != ' ')
	    {
	temp = 1;
	for(j=i-1;j>=0;j--)
	{
	    if(xau[j] == xau[i])
		{
		    temp = 0;
			break;
		}
	}
	    if(temp == 1)
	    dem++;
	    }
	}
    return dem;	
}
int main()
{
	char xau[]="abccabdad123";
	cout<<"so loai ki tu:"<<kitu(xau);
}
