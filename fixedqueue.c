//queue for both ends varying 
#include<stdio.h>
#include<conio.h>
#define max 5
int front=0;
int rear=-1;
int queue[max];
void enqueue()
{
    int item;
    if(rear== max-1)
    {
        printf("Queue is full \n");
    }
    else{
        printf("Enter your needed item \n");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
        
    }
}
void dequeue()
{
    int i;
    if(rear<0)
    {
        printf("Queue is empty \n");
    }
    else 
    {
        int item = queue[0];
        for(i=0; i<rear; i++)
        {
            queue[i]=queue[i+1];
            rear--;
        }
        printf("The removed item is \t %d", item);
    }

}
void display()
{
    int i;
    for(i=front; i<=rear ;i++)
    {
        printf("%d", queue[i]);
    }

}
int main()
{
    int choice;
    int queue[5];
    char cont;
    do
    {
        printf("Eneter what do you want to do ? \n");
        scanf("%d", &choice);
        switch (choice)
       {
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
       }
       printf("DO you still want to continue ? \n");
       
       scanf("%s",&cont);
    }while(cont=='y' || cont=='Y');
    return 0;
 
    
}
