#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55},i,temp;
    for(i=0;i<5;i++)
    {
        temp=a[0];
        a[0]=a[5-1];
        a[5-1]=temp;
        printf("\t%d",a[i]);
    }
    return 0;
}