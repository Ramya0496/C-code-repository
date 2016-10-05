#include <stdio.h>

int main(void) {
	// your code goes here
	int a,d,i=1,term=0,n;
	scanf("%d %d %d",&n,&a,&d);
	if(i==1){
		term=a;
	}
	for(i=1;i<n;i++)
	{
		term=term+(a+i*d);
	}
	printf("%d",term);
	return 0;
}
