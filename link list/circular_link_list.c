#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    struct Node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty....");
    }
    else{
        while(ptr != NULL)
        {
            printf("%d ");
        }
    }
};