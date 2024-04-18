#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10
void Nhap(int a[MAX],int n)
{    
     for(int i=0;i<n;i++)
        {   printf("a[%d]= ",i);
            scanf("%d",&a[i]);
        }      
}

void In(int a[MAX],int n)
{    
     for(int i=0;i<n;i++)
         {  
            printf("%d  ",a[i]);
         }
}

void sapxep(int a[MAX],int n)
{ 
     for(int i=0;i<n;i++)
       { 
             for(int j=i+1;j<n;j++)
                { 
                     if(a[i]>a[j])
                       { 
                                 int t=a[i];
                                 a[i]=a[j];
                                 a[j]=t;
                       }
                }
       }     
}

void tronmang(int a[MAX],int b[MAX],int c[2*MAX],int na,int nb,int nc)
{ 
    nc=na+nb;
    sapxep(a,na);
    sapxep(b,nb);
    int vta=0,vtb=0;
    for(int i=0;i<nc;i++)
    { 
		if(vta<na&&vtb<nb)
        {  
		    if(a[vta]<b[vtb])
            { 
                c[i]=a[vta];
                vta++;
            }else{
                c[i]=b[vtb];
                vtb++;
                }
            }
            else if(vtb==nb)
           { 
                c[i]=a[vta];
                vta++;
            }
            else
            { 
            c[i]=b[vtb];
            vtb++;
            }
    }
}

int main()
{ 
    int a[MAX],b[MAX],c[2*MAX],na,nb,nc;
    
    printf("\nso phan tu mang a: "); scanf("%d",&na);
    Nhap(a,na);
    printf("\nMang a vua nhap:\n");
    In(a,na);
    printf("\nMang a sau khi sap tang dan:\n");
    sapxep(a,na);
    In(a,na);
    
    printf("\nso phan tu mang b: "); scanf("%d",&nb);
    Nhap(b,nb);
    printf("\nMang b vua nhap:\n");
    In(b,nb);
    printf("\nMang b sau khi sap tang dan:\n");
    sapxep(b,nb);
    In(b,nb);
    
    printf("\nMang sau khi tron:\n");
    tronmang(a,b,c,na,nb,nc);
    In(c,na+nb);
}
