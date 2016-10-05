#include <stdio.h>

int main(void) {
	// your code goes here
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
	{
		printf("%d",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d",n2);
	}
	else printf("%d",n3);
	return 0;
}
