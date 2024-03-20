#include<stdio.h>
#define n 5
int front=-1;
int rear=-1;
 int a[n];
int insert(int val)
{  
    if (rear == n- 1)
     {  
        printf("Queue is full");  
    }  
    if (front == -1)
     {  
        rear++;  
        a[rear] = val;  
    }  
}  
int deleteEnd()
 {  
    if (front == -1 || front > rear) {  
        printf("Queue is empty");  
        return -1;  
    }  
    int val = a[front];  
    front++;  
    return val;  
}  
                                   
void display()
{
    int i;
    if(front>rear)
    {
         for(i=rear;i>=front;i++)
    {
        printf("\n%d",a[i]);
    }
    }
    
}

int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    display();
    
}