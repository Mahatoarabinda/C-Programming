#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[20];
	int x=10;
	itoa(x,ch,2);
	printf("%s",ch);
	return  0;
}


