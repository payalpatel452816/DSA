#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
     struct node *prev;
};  
struct node *head=NULL;   
void insertfirst(int val)  
{  
    struct node *ptr=head;     
    struct node *temp=malloc(sizeof(struct node));  
    temp->data=val; 
         if(head==NULL)  
   {  
      head = ptr;  
      ptr -> next = head;   
      ptr -> prev = head;   
   }  
   else   
   {  
       temp = head;   
    while(temp -> next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = ptr;  
    ptr -> prev = temp;  
    head -> prev = ptr;  
    ptr -> next = head;  
    head = ptr;  
   }  
        }   
void lastinsert(int val)  
{  
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node)); 
        ptr->data = val;  
               if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
      ptr -> next = head;  
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
void insertmid()
{
    
}
void deletefirst()  
{  
    
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        temp = head;   
        while(temp -> next != head)  
        {  
            temp = temp -> next;  
        }  
        temp -> next = head -> next;  
        head -> next -> prev = temp;  
        free(head);  
        head = temp -> next;  
    }  
  
}   
void deleteEnd()  
{    
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
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