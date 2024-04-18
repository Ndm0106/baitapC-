#include<stdio.h>
int main(){
   int a,b,c;
 
   //User nhap so can dao nguoc
   printf("\nNhap mot so bat ki:");
   scanf("%d", &a);
 
   //Goi ham de quy
   c = c(a);
   printf("\nSau khi dao nguoc :%d", c);
   return 0;
}
 
int daonguoc(int a){
   int sum = 0, d;
   if(a){
      d = num % 10;
      sum = (sum*10) + rem;
      daonguoc(num/10);
   }
   else
      return sum; // di?u ki?n d?ng
   return sum;
}
