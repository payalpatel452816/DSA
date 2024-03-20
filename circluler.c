#include<stdio.h>
#define n 10
int front=-1;
int rear=-1;
int a[n];
void enqueue(int val)

 {

if (front == -1 && rear == -1)

{

front = rear = 0;

}else if ((rear + 1) % n == front)

{

printf("queue is full\n");

return;

}else

rear = (rear + 1) % n;

a[rear] = val;

}
void dequeue()

 {

if (front == -1 && rear == -1)

{

printf("queue is empty \n");

return;

}else if (front == rear)

{

front = rear = -1;

}else

front = (front + 1) % n;

}
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i!=rear)  
        {  
            printf("%d", a[i]);  
            i=(i+1)%n;  
        }  
    }  
}  
int main()
{
    int choice;
    do{
        printf(".........Queue Is Performed By.....");
        printf("\n1.enqueue");
        printf("\n2.dequeue");
        printf("\n3.display");
        printf("\n..............");
        printf("\nEnter The Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue(11);
            enqueue(22);
            enqueue(33);
            enqueue(44);
            enqueue(55);
            enqueue(66);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("\nInvalid Num");
        }
    }while(choice!=3);
}