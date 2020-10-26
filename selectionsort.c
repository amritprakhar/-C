#include<stdio.h>
int main()
{  int i,j,n,t,a[25];
   printf("Enter size of your array : ");
   scanf("%d",&n);

   printf("Enter %d elements :",n);
   for(i=0;i<n;i++)
      {scanf("%d",&a[i]);
      }
  
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
      }
   }

   printf("Sorted elements are: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}
