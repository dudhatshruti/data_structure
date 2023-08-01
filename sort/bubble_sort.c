#include<stdio.h>
#include<stdlib.h>
#define n 5
int i,b,c,k;
int bubble(int a[], int b)
{
    for (i=0; i<n; i++)
    {
        printf("%d \t ",a[i]);
    }
    for (b=0; b<n; b++)
    { 
    for (k=0; k<n-i-1; k++)
    {
    if (a[k]>a[k+1])
    {
        c = a[k];
        a[k] = a[k+1];
        a[1] = c;
    }
    }
    }
}

int main(){
    int a[n]={12,23,35,15,11};
    int x,b;
    
    x=bubble(a,b);
}