//Write a C program to subtract two matrices


#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j;

    printf("Enter the number of rows of matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns of matrix A: ");
    scanf("%d", &n);

    printf("Enter the number of rows of matrix B: ");
    scanf("%d", &p);
    printf("Enter the number of columns of matrix B: ");
    scanf("%d", &q);

    if (m!=p || n!=q) 
	{
        printf(" Matrix dimensions must match for subtraction.\n");
    }

    int a[m][n], b[m][n], c[m][n];

    
    printf("Enter elements of matrix A:\n");
    for (i=0;i<m;i++) 
	{
        for (j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i=0;i<p;i++)
	{
        for (j=0;j<q;j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }

    for (i =0;i<m;i++) 
	{
        for (j=0;j<n;j++) {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

   
    printf("The resultant matrix after subtration is:\n");
    for (i=0;i<m;i++) 
	{
        for (j=0;j<n;j++) 
		{
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}


/*    output

Enter the number of rows of matrix A: 2
Enter the number of columns of matrix A: 2
Enter the number of rows of matrix B: 2
Enter the number of columns of matrix B: 2
Enter elements of matrix A:
4
5
3
5
Enter elements of matrix B:
1
2
1
4
The resultant matrix after subtration is:
3  3
2  1

*/
