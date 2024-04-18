#include<stdio.h>
#include<conio.h>
int main()
{
	float diem;
	printf("nhap diem: ");
	scanf("%f",&diem);
	if(diem<3)
	{
		printf("xep loai kem");
	}else if(3<diem<=5)
	{
		printf("xep loai yeu");
	}else if(5<diem<=7)
	{
		printf("xep loai trung binh");
	}else if(7<diem<=8)
	{
		printf("xep loai kha");
	}else if(diem>8)
	{
		printf("xep loai gioi");
	}
}
