//Write a C program to copy all elements from an array to another array
#include<stdio.h>
int main()
{
	int i,size,a[size],b[size];
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	//copied to b array
	printf("b array:");
	for(i=0;i<size;i++)
	{
		b[i]=a[i];
		printf("%d  ",b[i]);
	}
}


/*    output

enter size:5
enter elements:4
3
4
34
23
b array:4  3  4  34  23



*/
