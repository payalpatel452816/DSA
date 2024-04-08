#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node a,b;
    a.data=100;
    a.ch='A';
    a.ptr=NULL;

    b.data=200;
    b.ch='B';
    b.ptr=NULL;

    a.ptr=&b;
    b.ptr=&a;

    printf("B:data:%d,char:%C\n",a.ptr->data,a.ptr->ch);
    printf("A:data:%d, char:%c\n",b.ptr->data,b.ptr->ch);
 
}