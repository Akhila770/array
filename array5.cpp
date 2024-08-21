//Write a C program to find second largest element in an array.

#include <stdio.h>

int main()
 {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    if(size<2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int a[size];
    printf("Enter elements:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&a[i]);
    }
    int first=a[0];
    int second=-1; 
    for(i=1;i<size;i++) {
        if(a[i]>first) {
            second=first; 
            first=a[i]; 
        } else if(a[i]>second&&a[i]!=first) {
            second=a[i]; 
        }
    }
    if(second==-1||second==first) {
        printf("There is no second largest element (all elements might be the same).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

/*    output
Enter the size of the array: 5
Enter elements:
34
32
66
43
34
The second largest element is: 43

*/
