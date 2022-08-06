//Printing Star Pattern Using Two loops

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a value:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+i;j++)
		{
			if(j<n-i-1)
			     printf(" ");
			else
			     printf ("* ");
		}
		printf("\n");
	}
}
