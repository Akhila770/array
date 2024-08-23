//Write a C program to find transpose of a matrix
#include<stdio.h>
int main()
{
	int i,j,m,n,s,islower=1;
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
    //printing
    printf("matriX A:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
    }
    
	printf("\n\n");
	for(j=0;j<n;j++)
    {
    	for(i=0;i<m;i++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
