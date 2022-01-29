#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[]="12.45Hello";
	float f;
	char *ptr;
	f=strtod(ch,&ptr);
	 printf("Floating value =%f\n",f);
	 printf("remaining value =%s\n ",ptr);
	 return 0;
}

