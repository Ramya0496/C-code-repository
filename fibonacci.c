#include <stdio.h>

int main(void) {
	int n1=0,n2=1,n3,n,i;
	printf("enter the series u want to generate >=3\n");
	scanf("%d\n",&n);
	printf("%d\n %d\n",n1,n2);
	for(i=1;i<=n;i++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
