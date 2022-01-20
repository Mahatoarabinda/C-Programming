#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("%u\n",p);
	printf("%u\n",p+1);
	printf("%u\n",p+44);
}
