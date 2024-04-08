 #include<stdio.h>
#include<stdlib.h>
#define n 5
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void  insertlast(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
        temp -> data= val;
        temp -> next= NULL;
        if(head=NULL)
        {
            head=temp;
            return;
        }
        while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
    }
void insertfirst(int val)
{
       struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
        if(head==NULL)
        {
            temp->next=NULL;
            head=temp;
            printf("Item Inserted");
        }
        else{
            ptr=head;
            temp->next=ptr;
            head=temp;
        }
}
void middlle(int val,int p)
{
    struct node *ptr=head;
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    while(ptr->data!=p)
    ptr=ptr->next;
   temp->next=ptr->next;
   ptr->next=temp;
    
}
void middlledelete(int position)
{
    struct node *ptr=head;
    struct node *p;
    while(ptr->data!=position)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
} 
void deletefirst()
{
    struct node *ptr=head;
        head=ptr->next;
        free(ptr);

 }
void deletelast()
{
      struct node *ptr=head;
      struct node *p;
      if(head->next==NULL)
      {
        head=NULL;
        free(ptr);
        return;
      }
      while(ptr->next!=NULL)
      {
        p=ptr;
        ptr=ptr->next;
      }
      p->next=NULL;
      free(ptr);
      return;      
}
void display()
{
    struct node *ptr;
    ptr=head;
        if(ptr==NULL)
    {
        printf("List is empty\n");
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
    int choice ,a,b,c;
    do{
           printf("\n********************************");
    printf("\n.............Linked List Performed by..........");
    printf("\n1.Insertlast");
    printf("\n2.Insertfirst");
    printf("\n3.MiddlleInsert");
    printf("\n4.Middlledelete");
    printf("\n5.Deletefirst");
    printf("\n6.Deletelast");
    printf("\n7.Display");
    printf("\n8.Exit");
    printf("\n********************************");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("\nEnter Element:");
    scanf("\n%d",&a);
    insertlast(a);
    break;
    case 2:
     printf("\nEnter Element:");
    scanf("\n%d",&a);
    insertfirst(a);
    break;
    case 3:
     printf("\nEnter Element:");
    scanf("\n%d",&a);
     printf("\nEnter position:");
    scanf("\n%d",&b);
    middlle(a,b);
    break;
    case 4:
      printf("\nEnter position:");
    scanf("\n%d",&c);
    middlledelete(c);
    break;
    case 5:
    deletelast();
    break;
    case 6:
    deletefirst();
    break;
    case 7:
    display();
    break;
    case 8:
    exit(0);
    default:
    printf("\nInvalid choice");
    }
  }while(choice!=7);
}