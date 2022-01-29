#include<stdio.h>
#include<stdlib.h>
void showmsg()
{
   printf("Thank you for visit my code");
}
int main()
{
	atexit(showmsg);
	printf("Hello programmer\n");
	abort();
	printf("Good Morning\n");
	return 0;
}

