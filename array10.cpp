//Write a C program to delete an element from an array at specified position.

#include <stdio.h>
int main() 
{
    int size,i,pos;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter elements:\n");
    for(i = 0; i < size; i++)
	 {
        scanf("%d", &a[i]);
    }
    printf("Enter position to delete element (1 to %d): ", size);
    scanf("%d", &pos);
    if(pos<1|| pos>size) {
        printf("Invalid position!\n");
        return 1;
    }
    for(i=pos-1;i<size-1;i++) 
	{
        a[i]=a[i + 1];
    }
    size--; 
    printf("Array after deletion:\n");
    for(i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}

/*    output

Enter size of the array: 5
Enter elements:
1
2
34
333
2
Enter position to delete element (1 to 5): 2
Array after deletion:
1 34 333 2 
*/
