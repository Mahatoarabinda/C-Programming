//field width specifier and scanf function
#include<stdio.h>
main()
{
	char name[20];
	printf("Enter your name:");
	scanf("%3s",name);
	printf("your name is %s",name);
}
