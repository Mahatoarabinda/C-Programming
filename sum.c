#include<stdio.h>
int main()
{
	system("COLOR a");
	int i,arr[10],sum=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter the value:\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of Array elements is=%d",sum);
	return 0;
}
