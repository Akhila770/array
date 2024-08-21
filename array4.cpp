//Write a C program to find maximum and minimum element in an array. – using recursion
#include<stdio.h>
int array(int a[],int size)
{
	if(size>=0)
	{
		scanf("%d",&a[size]);
		array(a,size-1);
	}
}

int maximum(int a[],int size)
{
	if(a[size]==0)
	{
		return a[0];
	}	
   else
	{
		int max=maximum(a,size-1);
		return(a[size]>max)?a[size]:max;
	} 
}

int minimum(int a[],int size)
{
	if(a[size]==0)
	{
		return a[0];
	}	
   else
	{
		int min=minimum(a,size-1);
		return(a[size]<min)?a[size]:min;
	} 
}
int main()    
{
	int size,a[size];
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:\n");
	array(a,size-1);
	int max=maximum(a,size-1);
	printf("maximum:%d\n",max);
	int min=minimum(a,size-1);
	printf("maximum:%d",min);
}
/*    output

enter size:5
enter elements:
34
23
12
534
32
maximum:534
maximum:12


*/
