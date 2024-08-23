//Write a C program to interchange diagonals of a matrix

#include<stdio.h>
int main()
{
	int i,j,m,n,s;
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
    	// interchanging diagonals
    printf("after interchaging diagonals:\n");
    for(i=0;i<m;i++)
     {
    	int temp=a[i][i];
    	a[i][i]=a[i][n-1-i];
    	a[i][n-1-i]=temp;
	  }
	  for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  	   printf("%d ",a[i][j]);	
		}
		printf("\n");
	  }
    }
    else
    {
    	printf("ERROR");
	}
}

/*    output
enter rows of matrix A:3
enter columns of matrix A:3
enter elements of matrix A:
1
2
3
4
5
6
7
8
9
matriX A:
1 2 3
4 5 6
7 8 9
after interchaging diagonals:
3 2 1
4 5 6
9 8 7

*/
