#include<stdio.h>
#include<stdlib.h>
#define n 10
int i,j,t;
void bubble(int a[])
{
    for (i=0; i<n; i++){
         
       for (j=0; j<n-i-1; j++)
       {
          if (a[j]>a[j+1])
          {
             t = a[j];
             a[j] = a[j+1];
             a[j+1] = t;
          }
       }
    }   
}

int main(){
    int a[n]={10,9,12,56,8,34,89,45,2,23},i;
    for (i=0; i<n; i++)
       {
        printf("%d \t",a[i]);
       }

   bubble(a);
   printf("\n");
   for (i=0; i<n; i++)
   {
        printf("%d \t",a[i]);
   }   
}



