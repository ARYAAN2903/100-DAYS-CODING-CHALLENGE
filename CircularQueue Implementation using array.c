#include<stdio.h>
#define 	N 5
int queue[N];
int front=-1;
int rear = -1;

	void enqueue(int x)    //defining enqueue function
	{
		if(front==-1&& rear==-1)
		{
			front=rear=0;
			queue[rear]=x;
			
		}
		else if((rear+1)%N==front)
		{
			printf("queue is full");
			
		}else{
			rear=(rear+1)%N;
			queue[rear]=x;
		}
	}
	void dequeue(){         //defining dequeue function
		if(front==-1&&rear==-1)
		{
			printf("Underflow condition");
			
		}else if(front==rear)
		{
			front=rear=-1;
		}
		else{
			printf("%d",queue[front]);
			front=(front+1)%N;
		}
	}
	void display()
	 	
	{
		int i = front;
		if(front==-1&&rear==-1)
		{
			printf("Queue is empty");
		}
		else{
			  printf("Queue is");
			  while(i!=0)
			  {
			  	printf("%d",queue[rear]);
			  	i+(i+1)%N;
			  }printf("%d",queue[rear]);
		}
	}
	void peek()
	{
		if(front==-1&&rear==-1)
		{
			printf("Queue is empty");
			
		}else{
			printf("%d",queue[front]);
		}
	}
	int main()
{
	/* Declaration of variables */
	int ch, n;

    /* while loop */
    while(1)
    {
        printf("\n----Queue_Menu-----");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        /* switch case starts here */
        switch(ch)
        {
            case 1:
            	printf("Enter a integer : ");
            	scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            
            case 3:
                display();
                break;
           
            default:
                printf("\nInvalid Choice!");
        }   /* switch case ends here */
    }   /* while loop ends here */
} /* main function ends here */
