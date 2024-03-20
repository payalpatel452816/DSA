#include<stdio.h>
#define n 5
int a[n],i,val;
int rear=-1,front=0;
int insert()
{
    if(rear==n-1)
    {
        printf("Queue is Full");
    }
    else{
        printf("Enter an Element:");
        scanf("%d",&val);
        a[rear]=val;
    }
}
void deleteEnd()
{
    int c;
    if(front==rear)
    {
        printf("Queue is Empty");
    }
    else{
        c=a[front];
        printf("Delete element%d",c);
        front++;
    }
}
void display()
{
    int i;
    if(front>=rear)
    {
        printf("\nQueue is Empty");
    }
    else{
        printf("Queue Element");
        for(i=rear;i<front;i++);
        printf("\n%d",a[i]);
    }
}
int dequeueRear()
{
    int delete;
    if(front==rear)
    {
        printf("\nArray is Empty..");
    }
    else{
       rear--;
       delete=a[front+1];
    }
}
int dequeuefront()
{
    int delete;
    if(front==rear)
    {
        printf("\nArray is Empty..");
    }
    else{
       rear++;
       delete=a[rear-1];
    }
}
int main()
{
    int choice;
    do{
    printf("..........DEQUEUE Is Performed By.....");
    printf("\n1.Insert");
    printf("\n2.DeleteEnd");
    printf("\n3.Display");
    printf("\n4.Enqueue");
    printf("\n5.Dequeue");
    printf("\n...........");
    printf("\nEnter The Choice:");
    scanf("\n%d",&choice);
    switch(choice)
    {
        case 1:
        insert();
        break;
        case 2:
        deleteEnd();
        break;
        case 3:
        display();
        break;
        case 4:
        dequeueRear();
        break;
        case 5:
        dequeuefront();
        break;
        default:
        printf("\n Ivalide Element");
    }
}
while(choice<=5);
    }