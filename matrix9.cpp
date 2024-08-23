//Write a C program to find sum upper triangular matrix.


#include<stdio.h>
int main()
{
	int i,j,m,n,isupper=1,s;
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
    	s=0;
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if(j<i && a[i][j]!=0)
    			{
    			    isupper=0;
				}
	             if (j >= i) 
				 {  
                    s += a[i][j];
                 }
			}
		}
		
		if(isupper==1)
		{
		    printf("upper traingle:\n");
		    printf("sum=%d",s);
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
