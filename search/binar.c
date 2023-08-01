#include<stdio.h>
#include<stdlib.h>
#define n 10
int i,high,low,mid;
int binary(int a1[],int s)
{
    int high=n,low=0;

    while (low<=high)
    {
       mid=(high+low)/2;
       if (a1[mid]==s)
       {
            return mid+1;
       }
       else if(a1[mid] > s)
       {
            high = mid-1;
       }
       else
       {
            low = mid+1;
       }
    } 
}
int main(){
    int a1[n]={10,15,30,45,56,60,62,78,88,90},a;
    int x,s;
    for (i=0; i<n; i++)
    {
        printf("%d \t ",a1[i]);
    }
    printf("\n enter value for search...");
    scanf("%d",&s);

    x=binary(a1,s);
    if (x>=1)
    {
       printf("index %d",x);
    }
    else{
        printf("\nno available element");
    }
}

