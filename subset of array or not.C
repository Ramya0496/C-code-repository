#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a2[5]={1,2,3,4,5};
	int a1[3]={5,2,1},match=0,i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a2[j]==a1[i])
			{
				match++;
			}
		}
	}
	if(match==3)
	{
		printf("a1 is a subset of a2");
	}
	else
	{
		printf("a1 is not a subset of a2");
	}
	return 0;

}
