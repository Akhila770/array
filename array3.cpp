//Write a C program to find sum of all array elements. – using recursion

#include<stdio.h>

int r_array(int a[],int size)
{
	if(size>-1)
	{
		scanf("%d",&a[size]);
		r_array(a,size-1);
	}
}
int sum(int a[],int size,int s)
{
	if(size==-1){
		return s;
	}
   
	else
	{
		s=s+a[size];
		return sum(a,size-1,s);
	}
}

int main()
{
	int size,a[size],s1=0,s=0;
	printf("enter size:");
	scanf("%d",&size);
	printf("enter elements:\n");
	r_array(a,size-1);
	//printf("size: %d",size);
	s1=sum(a,size-1,s);
	printf("sum=%d",s1);
}
/*
output:-

enter size:5
enter elements:
34
24
65
43
23
sum=189


*/
