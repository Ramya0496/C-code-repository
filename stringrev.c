#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *str=(char *)malloc(30*sizeof(char));
char rev;
int i=0,j,size;
scanf("%s",str);
size=strlen(str);
j=size-1;
	while(i<j)
	{
	rev=str[i];
	str[i]=str[j];
	str[j]=rev;
	j--;
	i++;
	}
printf("%s",str);
return 0;
}


