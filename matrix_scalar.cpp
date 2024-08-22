//Write a C program to perform Scalar matrix multiplication

#include<stdio.h>
int main()
{
	int i,j,m,n,scalar;
	printf("enter no.of rows:");
	scanf("%d",&m);
	printf("enter no.of columns:");
	scanf("%d",&n);
	int a[m][n],c[m][n];
	printf("enter elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//scalar multiplication
	printf("enter a number to multiply:");
	scanf("%d",&scalar);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=scalar*a[i][j];
			printf("%d  ");
		}
		printf("\n");
	}
}

/*   output

enter no.of rows:2
enter no.of columns:2
enter elements:
2
3
2
3
enter a number to multiply:2
4  6
4  6


*/
