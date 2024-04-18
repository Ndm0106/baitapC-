#include<iostream>
#define MAX 20
using namespace std;
 
int n;
int dd[MAX] = { 0 };
int A[MAX];
 
void xuat() {
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) 
	{
        if (dd[i]==0)
		{
            A[k] = i;
            if (k == n)
            {
                xuat();
            }
            else
            {
            	dd[i]=1;
                Try(k + 1);
                dd[i] = 0;
            }
        }
    }
}
 
int main() 
{
    cout << "nhap n: ";
    cin >> n;
    Try(1);
}
