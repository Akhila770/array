//Write a C program to subtract two matrices

#include<stdio.h>
int main()
{
	int i,j,m,p,q,n,a[i][j],b[m][n],c[i][j];
	printf("enter rows of mqtrix a:");
	scanf("%d",&m);
	printf("enter columns of matrix a:");
	scanf("%d",&n);
	printf("enter rows of matrix b:");
	scanf("%d",&p);
	printf("enter columns of matrix b:");
	scanf("%d",&q);
	printf("enter elements of matrix a:\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix b:\n");
	int k,l;
	for(k=0;k<p;k++)
	{
		for(l=0;l<q;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
}
