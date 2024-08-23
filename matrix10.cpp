//Write a C program to find lower triangular matrix.


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
    s=0;
    if(m==n)
    {
    	
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if(j>i && a[i][j]!=0)
    			{
    			    islower=0;
				}
				if(j<=i)
				{
					s=s+a[i][j];
				}
			}
		}
		if(islower==1)
		{
		    printf("lower traingle:\n");
		    printf("sum=%d",s);
		}
		else
		{
			printf("not lower traingle\n");
		}
	}
	else
	{
		printf("ERROR");
	}
}
