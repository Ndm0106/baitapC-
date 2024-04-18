#include<stdio.h>
int main(){
   int num,daonguocso;
 
   //User nhap so can dao nguoc
   printf("\nNhap mot so bat ki:");
   scanf("%d", &num);
 
   //Goi ham de quy
   daonguocso = daonguoc(num);
   printf("\nSau khi dao nguoc :%d", daonguocso);
   return 0;
}
 
int daonguoc(int num){
   int sum = 0, rem;
   if(num){
      rem = num % 10;
      sum = (sum*10) + rem;
      daonguoc(num/10);
   }
   else
      return sum; // di?u ki?n d?ng
   return sum;
}
