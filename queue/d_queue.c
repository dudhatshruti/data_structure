#include<stdio.h>
#include<stdlib.h>
#define n 10
int f, r = -1, i;
int a[n];
int display(){
     for ( i = f; i <= r; i++)
    {
        printf("%d ",a[i]);
    }
}
int del(int x){
    int y,q,f;
    if (f ==-1)
    {
       printf("\n array is empty");
    }
    else
    {
        y = q[f];
        if (f == r)
        
            f = r = -1;
        
        else
            f++;
            return(y);
    }  
}
int main(){
    del(10);
    del(20);
    del(30);
    del(40);
    del(50);
    display();
}