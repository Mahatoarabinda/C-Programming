#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void peek();
void traversal();
int isFull();
#define N 5
int stack[N];
int top= -1;
int main()
{
	int ch,num;
	while(1)
	{
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n"); 
		printf("press 3 for peek\n");
		printf("Press 4 for traversal\n");
		printf("Press 5 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter a elements\n");
				scanf("%d",&num);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				traversal();
				break;
			case 5:
				exit(0);
			default:
				printf("Press after a valid input\n");
		}
	}
	return 0;
}
void push(int ele)
{
	if(isFull())
	{
	  printf("Stack overflow\n");
	}
	else
	{
		top= top+1;
		stack[top]=ele;
	}
}
void pop()
{
	if(isEmpty())
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("Poped element is %d\n",stack[top]);
		top=top-1;
	}
}
void peek()
{
	if(isEmpty())
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("Top element is %d \n",stack[top]);
	}
}
void traversal()
{
	int i;
	if(isEmpty())
	{
		printf("Stack underflow\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int isFull()
{
	if(top==N-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	return 0;
}
