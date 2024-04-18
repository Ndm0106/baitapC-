#include<iostream>
#define MAX 20
using namespace std;
 
int n;
int A[MAX];
 
void xuat() {
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
 
void Try(int k) {
    for (int i = 0; i <= 1; i++) 
	{
		{
            A[k] = i;
            if (k == n)
            {
                xuat();
            }
            else
            {
                Try(k + 1);
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
