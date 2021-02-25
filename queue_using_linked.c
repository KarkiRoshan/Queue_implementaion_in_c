#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};

struct node *front;
struct node *rear; //rear pointer

void pop()
{
    int item;
    struct node *ptr;
    if(rear==NULL)
    {
        printf("Queue is empty \n");

    }
    else 
    {
        item=front->val;
        printf("The dequeued value is %d ",item);
        struct node *ptr;
        ptr=rear;
        do
        {
            if(ptr->next == front)
            {
                ptr->next=NULL;
                front=ptr;
            }
            else
            {
                ptr=ptr->next;
            }
        } while (ptr->next != NULL);
        
    }

}
void push()
{
    int val;
    struct node *ptr;
    ptr =(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Memory cant be allocated \n");
    }
    else
    {
        printf("Enter the value you wnant to enqueue \n ");
        scanf("%d",&val);
        if(rear == NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            rear=ptr;
            front=ptr;
        }
        else
        {
            ptr->val=val;
            ptr->next=rear;
            rear=ptr;
        }
    }

}
void display()
{
    int item;
    struct node *ptr;
    ptr=rear;
    while(ptr != NULL)
    {
        item=ptr->val;
        ptr=ptr->next;
        printf("%d \n",item);
    }

}
int main()
{
     int choice;
    char cont;
    do
    {
        printf("What do you want to do? \n ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: display();
           break;
        
        default:
            break;
        }
        printf("DO you still want to continue? \n ");
        fflush(stdin);
        scanf("%c",&cont);

    } while (cont=='y');
    return 0;

}