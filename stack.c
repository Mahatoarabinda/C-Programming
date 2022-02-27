#include<stdio.h>
#include<stdlib.h>
int isFull();
int isEmpty();
void peek();
void pop();
void display();
void push(int);
#define N 5
int stack[N];
int top=-1;
int main()
{
	int ch,ele;
	while(1)
	{
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for peek\n");
		printf("Press 4 for display\n");
		printf("Press 5 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an Elements\n");
				scanf("%d",&ele);
				push(ele);
				break;
		    case 2:
		    	pop();
		    	break;
		    case 3:
		    	peek();
		    	break;
		    case 4:
		    	display();
		    	break;
		    case 5:
		    	exit(0);
		    default:
		    	printf("Please enter a valid option\n");
		}
	}
	return 0;
}
void push(int ele)
{
	if(isFull())
	{
		printf("stack overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
	}
}
void pop()
{
	int ele;
	if(isEmpty())
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("Poped item is %d\n",stack[top]);
		top--;
	}
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
	else
	return 0;
}
void peek()
{
	printf("Top elements is %d\n",stack[top]);
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);	
	}
	printf("\n");
}
