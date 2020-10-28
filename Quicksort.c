#include<stdio.h>
void quicksort(int n[25],int start,int last){
   int i, j, pivot, temp;

   if(start<last)
   {
      pivot=start;
      i=start;
      j=last;

      while(i<j){
         while(n[i]<=n[pivot]&&i<last)
            i++;
         while(n[j]>n[pivot])
            j--;
         if(i<j){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }

      temp=n[pivot];
      n[pivot]=n[j];
      n[j]=temp;
      quicksort(n,start,j-1);
      quicksort(n,j+1,last);

   }
}

int main(){
   int i, c, n[25];

   printf("Ente the Size : ");
   scanf("%d",&c);

   printf("Enter %d elements: ", c);
   for(i=0;i<c;i++)
      scanf("%d",&n[i]);

   quicksort(n,0,c-1);

   printf("Sorted elements: ");
   for(i=0;i<c;i++)
      printf(" %d",n[i]);

   return 0;
}
