#include<stdio.h>
#include<stdlib.h>
#define n 5
int top = -1, a[n], i;
int dis(){
    printf("\n");
    if (top < 0)
    {
        printf("array is empty now...");
    }
    else
    {
        for (i=0; i<=top; i++)
        {
            printf("%d",a[i]);
        }
    }
}
int push(int val){
    if (top >= n-1)
    {
       printf("\n array is full....");
    }
    else
    {
        ++top;
        a[top] = val;
    }
}
int pop(){
    if (top < 0)
    {
        printf("\narray is already empty...");
    }
    else
    {
        --top;
    }   
}
int firstin(int val){
    if (top >= n-1)
    {
       printf("\n array is full....");
    }
    else
    {
        top++;
        for (i=top; i>=0; i++)
        {
            a[i] = a[i-1];
        }
        a[0] = val;
    }
}
int firstout(){
    if (top < 0)
    {
        printf("\narray is already empty...");
    }
    else
    {
        --top;
    }   
}
int main(){
    dis();
}





