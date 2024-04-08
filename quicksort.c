#include<stdio.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    void quicksort(int a[],int first,int last)
    {
        int i,j,temp,pivot;
        if(first<last)
        {
            printf(a);
            pivot=first;
            i=first,j=last;
            while(i<j)
            {
                while(a[i]<=a[pivot]&&i<kast)
                i++;
            while(a[j]>a[pivot])
            i--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
            }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            quicksort(a,first,j-1);
            quicksort(a,j+1,last);
        }
    }
    int main()
    {
        int a[25],i;
        printf("How many Element Enter:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        a[i]=rand()%100+1;
    quicksort(a,0,n-1);
    printf("\nAfter quick sort:");
    print(a);
    }
}