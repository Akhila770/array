//Write a C program to find sum of each row and column of a matrix

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
     for(i=0;i<m;i++)
     {
     	s=0;
     	for(j=0;j<n;j++)
     	{
     		s=s+a[i][j];
		 }
		 printf("sum of elements of row %d:%d\n",i+1,s);
	 }
	  for(i=0;i<m;i++)
     {
     	s=0;
     	for(j=0;j<n;j++)
     	{
     		s=s+a[j][i];
		 }
		 printf("sum of elements of column %d:%d\n",i+1,s);
	 }
}

/*   output
enter rows of matrix A:2
enter columns of matrix A:2
enter elements of matrix A:
1
2
3
4
sum of elements of row 1:3
sum of elements of row 2:7
sum of elements of column 1:4
sum of elements of column 2:6
no
*/
