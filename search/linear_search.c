#include<stdio.h>
#include<stdlib.h>
#define n 7
int i;
void search(int a1[],int s){
    for (i=0; i<n; i++)
    {
       printf("%d \t",a1[i]);
    }
    
    for (i=0; i<n; i++)
    {
      if (a1[i]==s)
      {
         printf("\nfound index..... %d",i);
      }
      
    }
}
int main(){
    int a1[n],a;
    for (i=0; i<n; i++)
    {
      a1[i] = rand() % 100;
    }
    printf("\n enter value for search...");
    scanf("%d",&a);

    search(a1,a);
}