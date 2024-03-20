#include<stdio.h>
# define n 5
int a[n],i,val,top=-1;
void insert()
{
    if(top>=n-1)
    {
        printf("\nArray is Full");
    }
    else{
        top++;
        a[top]=val;
        printf("insert element is:");
        scanf("%d",&val);
    }
}
void delete()
{
    if(top<0)
    {
        printf("\nArray is Empty");
    }
    else{
         printf("Delete Element is:%d",a[top]);
         top--;
    }
}
void finsert()
{
    if(top>=n-1)
    {
        printf("Array is full...");
    }
    
    else{
        printf("insert element is:");
        scanf("%d",&val);
        top++;
        for(i=top;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
        
    }
}
void fdelete()
{
    if(top<0)
    {
        printf("\nArray is Empty..");
    }
    else{
        printf("Delete Element is:%d",a[top]);
        for(i=0;i<top;i++)
        {
            a[i]=a[i+1];
        }
        top--;
    }
}
void display()
{
    int i;
    if(top<0)
    {
        printf("\nArray Is Empty..");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("\t%d",a[i]);
        }
    }
}
int main()
{
    int choice;
    do{
    printf("\n..........Stack is Performed By.........");
    printf("\n1.last at insert");
    printf("\n2.last at delete");
    printf("\n3.first at insert");
    printf("\n4.first at Delete");
    printf("\n5.display");
    printf("\n.................");
    printf("\nEnter the Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        finsert();
        break;
        case 4:
        fdelete();
        break;
        case 5:
        display();
        break;
        default:
        printf("plz invalid Num");
    }
    }while(choice!=5);  
}