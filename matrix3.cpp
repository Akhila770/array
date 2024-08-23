//Write a C program to find sum of main diagonal elements of a matrix

#include<stdio.h>
int main()
{
	int i,j,m,n,s=0;
	printf("enter rows of matrix A:");
	scanf("%d",&m);
	printf("enter columns of matrix A:");
	scanf("%d",&n);
	int a[m][n];
	printf("enter elements of matrix A:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)      
	{ 
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	
	/*  for (i=0;i<m;i++)
	   {
	     s=s+a[i][i];
	    }
	    
	*/
	
printf("sum=%d",s);
}
