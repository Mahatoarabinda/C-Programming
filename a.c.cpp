//programe for checking anumber is even or odd using modula(&)opertar*/?
#include<stdio.h>
int main()
{
	int a,r;
	printf("Enter a number\n");
	scanf("%d",&a);
	r=a&1;
	if(r==0)
	{
		printf("%d is even number",a);
	}
	else
	{
		printf("%d is odd number",a);
	}
	return 0;
	}
