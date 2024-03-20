#include<stdio.h>
#define n 5
int insert(int a[],int c)
{
   int i;
   for(i=0;i<n;i++)
   {
      if(c==a[i])
      {
         return i;
      }
   }
   return -1;
}
int main()
{
   int a[n],i,c;
   for(i=0;i<=n;i++)
   {
      a[i]=rand()%100;
      printf("\n%d",a[i]);
   }
   printf("\nEnter Serch Element:");
   scanf("%d",&c);
   int temp=insert(a,c);
   if(temp==-1)
   {
      printf("Element is not found");
   }
   else {
      printf("Element is found at %d position",temp);
   }
}

