#include<stdio.h>
int main()
{
   int a,b,c=0;
   printf("\nNhap mot so bat ki:");
   scanf("%d",&a);

   while(a>=1)
   {
      b = a % 10;
     c = c * 10 + b;
      a = a / 10;
   }

   printf("\nSo sau khi dao nguoc la: %d", c);
   return 0;
}
