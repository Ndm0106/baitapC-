	#include<bits/stdc++.h>
	#define max 100
	using namespace std;
	void input(int A[max][max],int n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("nhap [%d][%d]= ",i,j);
				scanf("%d",&A[i][j]);
			}
		}
	}
	void output(int A[max][max],int n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
	}
	
	void tong(int A[max][max], int B[max][max], int C[max][max], int n){
	   for(int i = 0; i<n ; i++)
	   {
	        for(int j = 0; j<n ; j++)
	        {
	            C[i][j] = A[i][j]+B[i][j];
	        }
	    }
	}
	void tich(int A[max][max], int B[max][max], int D[max][max], int n)
	{
	   for(int i = 0; i<n ; i++)
	   {
	        for(int j = 0; j<n ; j++)
	        {
	         D[i][j] = A[i][j]*B[i][j];
	        }
	    }
	}
	void tongduongcheochinhC(int C[max][max], int n)
	{
		int sum=0;
		for(int i = 0; i<n ; i++)
	    {
	        for(int j = 0; j<n ; j++)
	        {
	        	if(i==j)
				{
				sum=sum+C[i][j];
				}
			}
		}
		printf("tong duong cheo chinh cua ma tran C la %d\n",sum);
	}
	int MaxD(int D[max][max],int n) {
	    int temp = D[0][0];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(temp<D[i][j])
	            {    
				    temp=D[i][j];
				}
			}
		}
		printf("Max la %d\n",temp);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	        	if(temp==D[i][j])
	        	{
	        		D[i][j]=-1;
	        	}
	        }
	    }
	}
	int main()
	{
		int n,A[max][max],B[max][max],C[max][max],D[max][max];
		do
		{
		printf("nhap n: ");
		scanf("%d",&n);
		}while(n<0);
		printf("nhap ma tran A\n");
		input(A,n);
		printf("nhap ma tran B\n");
		input(B,n);
		printf("ma tran A\n");
		output(A,n);
		printf("ma tran B\n");
		output(B,n);
		printf("tong ma tran A va B la\n");
		tong(A,B,C,n);
		output(C,n);
		printf("tich 2 ma tran A va B la\n");
		tich(A,B,D,n);
		output(D,n);
		tongduongcheochinhC(C,n);
		MaxD(D,n);
		printf("ma tran D sau khi tim Max\n");
		output(D,n);
	}	
