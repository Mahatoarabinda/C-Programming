//Impement Queue Using Array(SMA)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define MAX 5
void enqueue();
void dequeue();
void display();
void peek();
int queue [MAX];
int front=-1;
int rear=-1;
int main()
{
	int ch;
	system("COLOR f4");
	while(1)
	{
		printf("\n------------------------Queue Operations-----------------------\n");
		printf("1.enqueue operation\n");
		printf("2.dequeue operation\n");
		printf("3.display operation\n");
		printf("4.peek operation\n");
		printf("5.exit\n");
		printf("Enter your option number :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
					break;
			case 3:
				display();
				break;
			case 4:
				peek();
					break;
			case 5:
				exit(0);
			default:
				printf("Please enter correct option\n");
		}
	}
	getch();
	return 0;
}
void enqueue()
{
	int data;
	if(rear==MAX-1)
	{
		printf("Queue is Full\n");
	}
	else
	{
		if(rear==-1)
		{
			front=front+1;
		}
		printf("Enter the data\n");
		scanf("%d",&data);
		rear=rear+1;
		queue[rear]=data;
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Dequeue data is :%d\n",queue[front]);
		front++;
	}
}
void display()
{
	int i;
	printf("Queue elements are-------\n");
	for(i=front;i<=rear;i++)
	printf("%d\t",queue[i]);
}
void peek()
{
	printf("Peek elements is :%d\n",queue[front]);
}
