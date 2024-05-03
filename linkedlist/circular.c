#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
void display(struct node *tail) {
struct node *ptr=tail->next;
do {
printf("%3d",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
printf("\n");
}
struct node * insert_at_beginning(struct node *tail,int data)
{
  struct node *temp=NULL;
  temp=malloc(sizeof(struct node *));
  temp->data=data;
  temp->next=NULL;
  temp->next=tail->next;
  tail->next=temp;
  return tail;
}
struct node * insert_at_end(struct node *tail,int data)
{
  struct node *temp=NULL;
  temp=malloc(sizeof(struct node *));
  temp->data=data;
  temp->next=NULL;
  temp->next=tail->next;
  tail->next=temp;
  tail=temp;
  return tail;
}
void delete_at_beginning(struct node *tail)
{
 struct node *ptr=tail->next;
 tail->next=tail->next->next;
 ptr=NULL;
 free(ptr);
 return ;
 }
struct node *delete_at_end(struct node *tail)
{
 struct node *ptr=tail->next,*temp;
 temp=tail;
 while(ptr->next!=tail)
{
    
   ptr=ptr->next;
}
   
   ptr->next=tail->next;
   tail=ptr;
   temp=NULL;
   free(temp);
   return tail;
}
struct node * insert_at_position(struct node *tail,int data,int pos)
{
 if(pos==1)
{
  tail=insert_at_beginning(tail,70);
}
  struct node *ptr=tail->next,*temp;
  temp=malloc(sizeof(struct node *));
  temp->data=data;
  temp->next=NULL;
  pos--;
  while(pos!=1)
{
  ptr=ptr->next;
  pos--;
}
 temp->next=ptr->next;
 ptr->next=temp;
 return tail;
}

  
int main()
{
  struct node *tail=NULL,*current=NULL,*current1=NULL;
  tail=malloc(sizeof(struct node *));
  current=malloc(sizeof(struct node *));
  current1=malloc(sizeof(struct node *));
  tail->data=30;
  tail->next=tail;
  current->data=10;
  current->next=tail;
  tail->next=current;
  current1->data=20;
  current1->next=tail;
  current->next=current1;
  printf("before insertion\n");
  display(tail);
  tail=insert_at_beginning(tail,40);
  display(tail);
  tail=insert_at_end(tail,50);
  display(tail);
  delete_at_beginning(tail);
  display(tail);
  tail=delete_at_end(tail);
  display(tail);
  tail=insert_at_position(tail,70,2);
  display(tail);
  }
  
  
  
  

