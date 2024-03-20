#include<stdio.h>
#define n 20
int serch(int a[],int l,int h,int c)
{
    int i,mid,key;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]<key)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        return -1;
    }
}
int main()
{
    int a[n]={2,5,7,9,11,32,33,55,77};
    int temp,c;
    printf("\nEnter Serch Element:");
   scanf("%d",&c);
   temp= serch(a,0,n-1,c);
   if(temp==-1)
   {
      printf("Element is not found");
   }
   else {
      printf("Element is found at %d position",temp);
   }
}
