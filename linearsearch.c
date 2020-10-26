#include<stdio.h>
int main()
{
  int a[100],i,j,e,n;
  printf("Enter the size of Array : ");
  scanf("%d",&n);
  printf("Enter an Array : ");
  for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
 printf("your Array is : ");
 for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
printf("\n");  
printf("Enter the Elemnt you want to search : ");
scanf("%d",&e);
for(i=0;i<n;i++)
   if (a[i] == e)    
    {
      printf("%d is present at location %d", e, i+1);
      break;
    }
  
   if(i==n)
    printf("\n %d isn't present in the array", e);
return 0;
}
