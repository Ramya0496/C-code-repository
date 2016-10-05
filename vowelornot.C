#include <stdio.h>

int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(ch == "A"||ch=="E"||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o' ||ch=='u')
	{
		printf("VOWELS");
	}
	else
	{
		printf("CONSONANT");
	}
	return 0;
}
