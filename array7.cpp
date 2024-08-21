//Write a C program to count total number of negative elements in an array

#include<stdio.h>
int array(int a[],int size)
{
	
}

int negative(int a[],int size)
{  
    int i,c=0;
    for(i=0;i<size;i++)
   {
	if(a[i]<0)
	{
		c=c+1;
	}
}
	return c;
}

int main()
{
	int size,a[size],i;
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("no. of negative numbers:%d",negative(a,size));
}


/*    output

enter size:5
enter elements:
2
-1
24
-4
-4
no. of negative numbers:3


*/
