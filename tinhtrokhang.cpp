#include<stdio.h>
#include<math.h>
void nhapso(int &n)
{
	do
	{
    printf("nhap so: ");
	scanf("%d",&n);
	printf("yeu cau nhap lai");	
	}while(n<0);
	
}
 void hienthiso(int &n)
{
	printf("\nso vua nhap la %d",n);
}
void nhap(float &R,float &L,float &C)
{
	printf("\nnhap R: ");scanf("%f",&R);
	printf("nhap L: ");scanf("%f",&L);
	printf("nhap C: ");scanf("%f",&C);
}
float X(float &R,float &L,float &C)
{
	float X;
	X=sqrt(pow(R,2)+pow(L-C,2));
	return X;
}
void hienthi(float X)
{
	printf("tro khang cua mach la %f",X);
}
int main()
{
	int x;
	float a,b,c;
	nhapso(x);
	hienthiso(x);
	nhap(a,b,c);
	X(a,b,c);
	hienthi(X(a,b,c));
}
	
