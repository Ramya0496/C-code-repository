#include <stdio.h>

int main(void) {
	// your code goes here
	int no,digit=0;
	scanf("%d",&no);
	while(no!=0)
	{
	no=no/10;
	digit++;
	}
	printf("%d",digit);
	return 0;
}
