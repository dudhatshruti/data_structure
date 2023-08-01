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
    struct node *ptr = head;
    if(head == NULL)
        printf("list is empty....");
    else{
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }    
}

void insertend()
{
    int val;
    printf("enter a value:");
    scanf("%d",&val);
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;    
}

void deletend()
{
    struct node *ptr = head;
    struct node *p;
    if (head == NULL)
        printf("\n link is empty....");
     while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void firstinsert()
{
    int val;
    printf("enter a value:");
    scanf("%d",&val);
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->next = head;
    head = temp;
    return;
}

void firstdelet()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n list is empty");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
    } 
}

void midinsert()
{
    int val,pos;
    printf("enter a value:");
    scanf("%d",&val);
    struct node *ptr = head, *temp = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else{
        temp->data = val;
        printf("\n enter the location after which you want to insert");
        scanf("%d ",&val);
        while(ptr->data != pos)
            ptr = ptr->next;
            temp ->next = ptr->next;
            ptr->next = temp;
    }
}

void midDelet()
{
    int pos;
    struct node *ptr = head, *temp;
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {    
        printf("\nEnter the location after which you want to delet ");  
        scanf("%d",&pos);
        while(ptr->data != pos)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        free(ptr);
       
    }       
}

int main()
{
    int choice;
    printf("1.First insert.......\n");
    printf("2.First delet.......\n");
    printf("3.mid insert.......\n");
    printf("4.mid delet.......\n");
    printf("5.last insert.......\n");
    printf("6.last delet.......\n");
    printf("7. display\n");
    printf("0. exit\n");

     do
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                firstinsert();
                break;
            case 2:
                firstdelet();
                break;
            case 3:
                midinsert();
                break;
            case 4:
                midDelet();
                break;
            case 5:
                insertend();
                break;
            case 6:
                deletend();
                break;
            case 7:
                display();
                break;
            case 0: 
                break;
            default:
                printf("Wrong choice enter....\n");
                break;
        }
    } 
    while (choice !=0);    
}