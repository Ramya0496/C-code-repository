#include <stdio.h>

int main(void) {
	int n=0,i=0;
	char s[50];
	printf("enter the string");
	gets(s);
	printf("%s\n",s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			n++;
		}
	i++;
	}
	printf("\n the no of words in string is %d",n+1);
	return 0;
}
