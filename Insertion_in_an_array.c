#include<stdio.h>
int main()
{
	int i,new,size,a[100],index;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	printf("Enter %d Elements : ",size);
	for(i=0;i<size;i++)
	{
	    scanf("%d",&a[i]);
    }
    printf("Array is : \n");
    for(i=0;i<size;i++)
    {
	    printf(" %d",a[i]);
    }
    printf("\nEnter the New Element you want to Insert : \n");
    scanf("%d",&new);
    printf("\nEnter the Index at which you Want to Insert : \n");
    scanf("%d",&index);
    for(i=size;i>index;i--)
    {
    	a[i]=a[i-1];
	}
	size++;
	a[index]=new;
	printf("Your New Array is :\n");
	for(i=0;i<size;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
