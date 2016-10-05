#include <stdio.h>
int factorial(int);
int main(void) {
	// your code goes here
	int n,r,result;
	scanf("%d %d ",&n,&r);
	result=factorial(n)/factorial(n-r);
	printf("nPr=%d",result);
	return 0;
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
return fact;
}
