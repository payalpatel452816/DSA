#include<stdio.h>
#define n 5
int a[n],val,top=-1;
    
void insert( int val)
{
    if(top>=n-1)
    {
        printf("\nStack is Full");
    }
    else{
        top++;
        a[top]=val;
    }
}
void deleteEnd()
{
    if(top<1)
    {
        printf("\nStack is Empty");
    }
    else{
        top--;
    }
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        if(top<0)
    {
        printf("\nStack is full");
    }
    else{
        printf("%d",a[i]);
    }
    }
}

int main()
{
    int choice;
    do{
        printf("............Stack Is Performed By.......");
        printf("\n1.insert");
        printf("\n2.display");
        printf("\n3.delete");
        printf("\n4.Exit");
        printf("\n..............");
        printf("\nEnter Your Choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert(10);
            insert(20);
            insert(30);
            insert(40);
            insert(50);
            break;
            case 2:
            display();
            break;
            case 3:
            deleteEnd();
            break;
            case 4:
            printf("\nExit");
            break;
            default:
            printf("\n Invalid Num");
        }
   }while(choice!=4);  
}
