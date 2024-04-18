#include<stdio.h>
#include<conio.h>

int main()
{
	int tongtien,thue;
	printf("nhap tongtien: ");
	scanf("%d",&tongtien);
	if(tongtien<=5000)
	{
		thue=0;
	}else{
		if(tongtien<=20000)
		{
			thue=(tongtien - 5000)*0.25;
		}else{
			thue=(15000)*0.25+(tongtien-20000)*0.4;
		}
	}
	int thuclinh;
	thuclinh=tongtien-thue;
	printf("thuc linh = %d",thuclinh);
}
