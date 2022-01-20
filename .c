#include<stdio.h>
printfln();
int add(int,int);
int sub(int x,int y);
main()
{
	int a,b,sum,diff;
	printf("Enter the value\t");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	diff=sub(a,b);
	printfln();
	printf("Result of addition is %d\n",sum);
	printf("Result is subtraction is %d\n",diff);
	
}
printfln()
{
	printf("------------------\n");
	
}
int add(int a,int b)
{
	return a+b; 
}
int sub(int a,int b)
{
	return a-b;
}

