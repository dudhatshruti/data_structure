#include<stdio.h>
#include<stdlib.h>
int n,i;
void print(int a[])
{
    print("\n");
    for ( i = 0; i < n; i++)
        print("%d ",a[i]);   
}

void quicksort(int a[], int first, int last)
{
    int i,j,temp,pivot;
    if (first < last)
    {
        print("\n inside quick sort:");
        print(a);
        pivot = first;
        

    }
    
}
int main()
{
    // int a[25],i;
    int a[]={60,10,40,70,50,20,80,30,90};
    printf("how many element you enter:");
    scanf("%d ",&n);

    for ( i = 0; i < n; i++)
    a[i] = rand()%100+1;
    
    print(a);
}