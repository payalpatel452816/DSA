#include<stdio.h>
int main()
{
    int a[5],i,c,n=5;
    for(i=0;i<n;i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    c=a[0];
    printf("\n\telements are:");
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=c;
    for(i=0;i<n;i++)
    {
        printf("%d\t\n",a[i]);
    }
    return 0;
}