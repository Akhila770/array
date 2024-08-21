//Write a C program to print all negative elements in an array.

#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("negative values in array:\n");
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d  ",a[i]);
		}
	}
}
