#include<stdio.h>
#define n 5
int a[n],top=-1;
int insert(int val)
{
    if(top>=n-1)
    {
        printf("Stack is full:\n");
    }
    else{
        top++;
        a[top]=val;
    }
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\n%d",a[i]); 
    }
    
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

}