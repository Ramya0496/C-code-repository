#include <stdio.h>
#include <stdlib.h>
void workingday(char *day);
int main(void) {
	char *day=(char *)malloc(15*sizeof(char));
	scanf("%s",day);
	workingday(day);
	return 0;
}
void workingday(char *day)
{
	if(day=='sunday')
	puts("false");
	else
	puts("True");
}
