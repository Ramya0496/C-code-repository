#include <stdio.h>
int findunique(int *,int);
int main(void) {
	// your code goes here
	int arr[10],size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",findunique(&arr,size));
	return 0;
}
	int findunique(int *arr,int size)
	{
		int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[i]=arr[j]=-1;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]!=-1)
		{
			return arr[i];
		}
	}
}
