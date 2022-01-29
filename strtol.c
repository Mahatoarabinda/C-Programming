#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[]="12Hello";
	char n;
	char *ptr;
	n=strtol(ch,&ptr,10);
	printf("Integer value =%ld\n",n);
	printf("Remainig value =%s\n",ptr);
	return 0;
}


