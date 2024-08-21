//C program to read and print elements in an array

#include<stdio.h>
#define size 10000
int main()
{
	int array[size],i,n;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("elements:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
}
