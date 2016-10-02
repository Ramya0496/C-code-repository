#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int size,i;
	scanf("%d",&size);
	char *s=(char *)malloc(size*sizeof(char));
	scanf("%s",s);
	printf("%s\n",s);
	for(i=0;i<size;i++)
	{
		printf("%c=%d\n",s[i],s[i]);
	}
	return 0;
}
