#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertEnd(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void deletelast()
{
    struct node *ptr=head;
    struct node *p;
    if(head==NULL)
    {
        printf("List Is already Empty");
    }
    else if(head ->next==NULL){
           head=NULL;
           free(ptr);
           return ;
    }
      while(ptr ->next!=NULL)  {
        p=ptr;
        ptr=ptr->next;
      }
      p->next=NULL;
      free(ptr);
      return;
}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    }
}
int main()
{
    insertEnd(100);
    insertEnd(200);
    insertEnd(300);
    insertEnd(400);
    insertEnd(500);
    display();
    deletelast();
    display();
}