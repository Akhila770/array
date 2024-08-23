//Write a C program to find sum of minor diagonal elements of a matrix

#include<stdio.h>
int main()
{
	int i,j,m,n,s=0;
	printf("enter rows of matrix A:");
	scanf("%d",&m);
	printf("enter columns of matrix A:");
	scanf("%d",&n);
	int a[m][n];
	printf("enter elements of matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(m==n)
	{  
	for(i=0;i<m;i++)
	{
			
		s=s+a[i][n-1-i];
	}
    }
	printf("sum=%d",s);
}
