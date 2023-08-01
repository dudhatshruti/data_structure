#include<stdio.h>
#include<stdlib.h>
#define n 8
int top = -1 , a[n] ,i;
int dis(){
    printf("\n");
    if (top < 0)
    {
       printf("array is empty now.....");
    }
    else{
        for (i=0; i<=top; i++)
        {
            printf("%d",a[i]);
        }
    }
}
int push (int val){
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
int main(){
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);
        push(60);
        push(70);
        dis();
        pop();
        pop();
        pop();
        pop();
        dis();
}