#include <stdio.h>

int main(void) {
	// your code goes here
	int no,fact=1,i;
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("factorial= %d",fact);
	return 0;
}
