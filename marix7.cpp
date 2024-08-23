//Write a C program to find upper triangular matrix.


#include<stdio.h>
int main()
{
	int i,j,m,n,s,isupper=1;
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
    
    if(m==n)
    {
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if(j<i && a[i][j]!=0)
    			{
    			    isupper=0;
				}
			}
		}
		if(isupper==1)
		{
		    printf("upper traingle:\n");
		}
		else
		{
			printf("not upper traingle\n");
		}
	}
	else
	{
		printf("ERROR");
	}
}
