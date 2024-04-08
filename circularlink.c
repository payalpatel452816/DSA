#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head=NULL;   
void insertfirst(int val)  
{  
    struct node *ptr=head;     
    struct node *temp=malloc(sizeof(struct node));  
    temp->data=val; 
        if(head == NULL)  
        {  
            head = temp;  
            temp-> next = head;  
            return;
        }  
            while(ptr->next != head)  
            { 
            ptr=ptr->next;   
            temp -> next = head;   
            head=temp;
            return;
        
            }
        }   
void lastinsert(int val)  
{  
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node)); 
        ptr->data = val;  
        if(head == NULL)  
        {  
            head =temp;  
            temp -> next = head;  
            return;  
        }  
            while(ptr -> next != head)  
            {
                ptr=ptr->next;
                ptr->next=temp;
                temp->next=head;
                return;
            }
        }   
  void middlleinsert(int val,int p)
  {
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    while(ptr->data!=p)
    {
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
    }
  }
  void middlledelete(int position)
  {
     struct node *ptr=head;
     struct node *p;
     while(ptr->data!=position)
    {
        p=ptr;
        ptr=ptr->next;
        p->next=ptr->next;
        free(ptr);
    }
  }
void deletefirst()  
{  
    struct node *ptr=head;   
    struct node*p=head;   
        while(ptr -> next != head)  
        {
             ptr = ptr -> next;   
        ptr->next = p->next; 
          head = p->next;   
        free(p);  
        }        
 }  
void deleteEnd()  
{  
    struct node *ptr=head;  
    struct node *p;
    if(head->next==head)  
    {   
        
        head = NULL;  
        free(head);  
        return;
    }  
    while(ptr->next!=head)   
    {  
       p=ptr;
       ptr=ptr->next;
    }  
    p->next=head;
    free(ptr);
    return;
}  
void display()  
{  
    struct node *ptr=head;    
    if(head == NULL)  
    {  
        printf("\nList is Empty");  
    }     
    else  
    {     
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
    printf("\n");            
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
    lastinsert(a);
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
    middlleinsert(a,b);
    break;
    case 4:
      printf("\nEnter position:");
    scanf("\n%d",&c);
    middlledelete(c);
    break;
    case 5:
    deleteEnd();
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