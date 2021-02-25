#include<stdio.h>
#include<conio.h>
#define max 3
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
{
	int item;
	if(rear == -1 )
	{
		front =0;
		rear =0;
		printf("Enter the data \n");
		scanf("%d",&item);
		queue[rear]=item;
	}
	else if(front == (rear+1)%max)
	{
		printf("queue is full \n");
		
	}
	else
	{
		rear = (rear+1)%max;
		printf("Enter the data \n");
		scanf("%d",&item);
		queue[rear]=item;
	}
}
void dequeue()
{
	int item;
    if(front == -1)
    {
    	printf("Queue is empty \n");
    	
	}
	else 
	{
		item = queue[front];
		if(front == rear)
		{
			front = rear = -1;
		}
		else 
		{
			front = (front + 1)%max;
		}
	    printf("Removed item is %d ",item);
	}

}
void display()
{
	int i;
	if(front==-1 && rear ==-1 )
	{
		printf("Queue is empty \n");
	}
	else if(front<=rear)
	{
		for(i=front ; i<=rear ; i++)
		{
			printf("%d",queue[i]);
		}
		
	}
	else if(front>rear)
	{
		for(i=front; i<max ;i++)
		{
			printf("%d \n",queue[i]);
		}
		for(i=0; i<=rear; i++)
		{
			printf("%d \n",queue[i]);
		}
    }
	
	}
	
	

int main()
{
    int choice;
    char cont;
    do
    {
        printf("Enter what you wanna do ? \n");
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
        printf("Do you want to continue ? \n");
        scanf("%s" ,&cont);


    }while(cont == 'y');
    return 0;
 
    
}

