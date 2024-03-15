#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
     void display(struct node *head) {
      struct node *ptr=head;
      while(ptr!=NULL){
       printf("%3d",ptr->data);
       ptr=ptr->next;
}
       printf("\n");
}
       struct node* insert_at_beginning(struct node *head,int data) {
        struct node *temp=(struct node *)malloc(sizeof(struct node *));
        temp->data=data;
        temp->next=NULL;
        temp->next=head;
        head=temp;
        return head;
}
        struct node* delete_at_beginning(struct node *head) {
        struct node *ptr=head;
        head=head->next;
        ptr=NULL;
        free(ptr);
        return head;
}
        
        void insert_at_end(struct node *head,int data) {
        struct node *temp=NULL;
        temp=(struct node *)malloc(sizeof(struct node *));
        temp->data=data;
        temp->next=NULL; 
        struct node *ptr=head;
        while(ptr->next!=NULL) {
         ptr=ptr->next;
}
         ptr->next=temp;
         return;
}
         void delete_at_end(struct node *head) {
         struct node *temp,*ptr=head;
         temp=(struct node *)malloc(sizeof(struct node *));
         while(ptr->next!=NULL) {
         temp=ptr;
         ptr=ptr->next;
}
         temp->next=NULL;
         free(ptr);
         return;
         }
         void insert_at_position(struct node *head,int data,int pos) {
         struct node *temp,*ptr=head;
         temp=(struct node *)malloc(sizeof(struct node *));
         temp->data=data;
         temp->next=NULL;
         pos--;
         while(pos!=1) {
         ptr=ptr->next;
         pos--;
}
         temp->next=ptr->next;
         ptr->next=temp;
         return;
         
}
         int main() {
		 struct node *head=NULL;
		 head=(struct node*)malloc(sizeof(struct node*));
		 head->data=10;
		 head->next=NULL;
		 struct node *current=NULL;
		 current=(struct node*)malloc(sizeof(struct node *));
		 current->data=20;
		 current->next=NULL;
		 head->next=current;
		 current=NULL;
		 current=(struct node*)malloc(sizeof(struct node *));
		 current->data=30;
		 current->next=NULL;
		 head->next->next=current;
		 display(head);
		 head=insert_at_beginning(head,40);
		 display(head);
		 insert_at_end(head,50);
		 display(head);
		head= delete_at_beginning(head);
		 display(head);
		 delete_at_end(head);
		 display(head);
		 insert_at_position(head,60,2);
		 display(head);
		 }
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	
          
