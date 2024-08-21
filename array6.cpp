//Write a C program to count total number of even and odd elements in an array.

#include<stdio.h>
int array(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
}

int even(int a[],int size)
{
	int c=0,i;
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
		  c=c+1;	
		}
	}
	return c;
}
int odd(int a[],int size)
{
	int c=0,i;
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		{
		   c=c+1;	
		}
	}
	return c;
}
int main()
{
	int size,a[size];
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:\n");\
	array(a,size);
	printf("no. of even number count in array:%d\n",even(a,size));
	printf("no. of odd number count in array:%d",odd(a,size));
}


/*    output
enter size:5
enter elements:
23
21
46
37
36
no. of even number count in array:2
no. of odd number count in array:3

*/
