//Write a C program to multiply two matrices

#include<stdio.h>
int main()
{
	int i,j,m,n,p,q,k;
	printf("enter rows of matrix A:");
	scanf("%d",&m);
	printf("enter columns of matrix A:");
	scanf("%d",&n);
	printf("enter rows of matrix b:");
	scanf("%d",&p);
	printf("enter columns of matrix b:");
	scanf("%d",&q);
	int a[m][n],b[p][q];
	if(m!=q || n!=p)
	{
		printf("rows or columns of matrix A and B not matched.");
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
		
		//multiplication
		int c[i][j];
		for(i=0;i<m;i++)
		{
		    for(j=0;j<q;j++)
			{
				int sum=0;
			   for(k=0;k<p;k++)
			   {
			   	    sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;	
			}	
		}	
		//print resultant matrix
		printf("after multiplication:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}


/*   output 1

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
after multiplication:
7 10
15 22

*/

/*     output2

enter rows of matrix A:2
enter columns of matrix A:3
enter rows of matrix b:2
enter columns of matrix b:2
rows or columns of matrix A and B not matched.
*/
