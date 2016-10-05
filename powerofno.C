#include <stdio.h>

int main(void) {
	// your code goes here
	int power,base,answer=1,i;
	scanf("%d %d",&base,&power);
	for(i=0;i<power;i++)
	{
		answer=base*answer;
	}
	printf("%d",answer);
	return 0;
}
