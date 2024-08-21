//Write a C program to insert an element in an array
 #include<stdio.h>
 int main()
 {
 	int i,size,a[size+1],insert,pos;
 	printf("enter size:");
 	scanf("%d",&size);
 	printf("enter elements:");
 	for(i=0;i<size;i++)
 	{
 		scanf("%d",&a[i]);
	}
	printf("enter element to insert:");
	scanf("%d",&insert);
	printf("enter position :");
	scanf("%d",&pos);
	if(pos>=0 || pos<size)
	{
		for(i=size;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=insert;
		for(i=0;i<size;i++)
		{
			printf("%d\n",a[i]);
		}
	}
 }
 
 
 /*  output
 
 enter size:5
enter elements:1
23
23
24
23
enter element to insert:2
enter position :34
1
23
23
24
23

*/
