#include<stdio.h>
int main()
{
    int a1[5],arr2[2],a3[7];
    int i,j=0;
    printf("enter num of array a1:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
     printf("enter num of array a2:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
          a3[j]=a1[i];
          j++;
    }

    for(i=0;i<2;i++)
    {
          
          a3[j]=arr2[i];
          j++;

    }

     printf("merge array:");
    for(i=0;i<7;i++)
    {
        printf("%d",a3[i]);
    }
        
}