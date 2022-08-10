#include<stdio.h>
void TOH(int n,char begin_peg,char aux_peg,char end_peg)
{
	if(n==1)
	{
		printf("\n Move disk 1 from peg %c to peg %c",begin_peg,aux_peg);
		return;
	}
	 TOH(n-1,begin_peg,end_peg,aux_peg);
	 printf("\n Move disk %d from peg %c to peg %c",n,begin_peg,aux_peg);
	 TOH(n-1,end_peg,aux_peg,begin_peg);
}
int main()
{
	int n=3;
	TOH(n,'A','B','c');
	return 0;
}
