#include<stdio.h>
struct a
{
	char a;
	float b;
	int c;
	double d;
	int e;
};
   int main()
{
	struct a var;
	printf("%p",(sizeof var));
}
