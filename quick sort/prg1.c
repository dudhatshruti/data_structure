#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
} 
void quicksort(int a[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        i=first;
        pivot=first;
        j=last;
        while(i<j)
        {
            while(a[i]<a[pivot])
                i++;
            while(a[j>a[pivot]])    
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }    
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;

         quicksort(a,first,j-1);
         quicksort(a,j+1,last);

    }
}

int main()
{
    int a[10],i;
    n=10;
    
   printf("\n How many element you want to sort:");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100+1;
    }
    printf("\n ");
    printf("Before the Sorting array:\n");
    print(a);
    quicksort(a,0,n-1);
     printf("\n ");
    printf("After the Sorting array:\n");
    print(a);


}