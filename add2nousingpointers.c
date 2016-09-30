#include <stdio.h>

int main(void) {
	// your code goes here
	int *a,*b,n1=5,n2=4;
	a=&n1;
	b=&n2;
	printf("%d",*a+*b);
	return 0;
}
