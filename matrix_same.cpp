//Write a C program to check whether two matrices are equal or not

#include<stdio.h>
int main()
{
	int i,j,m,n,p,q;
    printf("enter rows of matrix A:");
	scanf("%d",&m);
	printf("enter columns of matrix A:");
	scanf("%d",&n);
	printf("enter rows of matrix b:");
	scanf("%d",&p);
	printf("enter columns of matrix b:");
	scanf("%d",&q);
	int a[m][n],b[p][q],equal=1;
	
	if(m!=p || n!=q)
	{
		printf("error");
	}
	else
	{
		
		printf("enter elements of matrix A:\n");
	   for(i=0;i<m;i++)
	   {
	   	for(j=0;j<n;j++)
	   	{
	   	   scanf("%d",&a[i][j]);	
		}
	    }
		
		printf("enter elements of matrix B:\n");
	   for(i=0;i<p;i++)
	   {
	   	for(j=0;j<q;j++)
	   	 {
	   	    scanf("%d",&b[i][j]);	
	     }
	    }
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				if(a[i][j]!=b[i][j])
				{
				   equal=0;
				   break;
				}
			}
			if(equal==0)
			{
				break;
			}
		}
		if(equal)
		{
			printf("the matrices are equal.");
		}
		else
		{
			printf("the matrices not are equal.");
		}
	}
}


/*   outpu 1
enter rows of matrix A:2
enter columns of matrix A:2
enter rows of matrix b:2
enter columns of matrix b:2
enter elements of matrix A:
2
4
3
2
enter elements of matrix B:
3
2
4
3
the matrices not are equal.
--------------------------------
*/

/*   output2

enter rows of matrix A:2
enter columns of matrix A:2
enter rows of matrix b:2
enter columns of matrix b:2
enter elements of matrix A:
1
2
3
4
enter elements of matrix B:
1
2
3
4
the matrices are equal.
*/
