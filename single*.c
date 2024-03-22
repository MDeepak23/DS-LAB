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
  
 struct node* delete_at_position(struct       node *head, int pos) {

    struct node *ptr,*temp;
    ptr=head;
    temp=head;
       if(head==NULL) {
        printf("List is already empty");
    }
    else if(head->data==NULL) {
        free(head);
        head=NULL;
    }


    while(pos!=1) {

        ptr=temp;
        temp=temp->data;
        pos--;
    }
    ptr->data=temp->data;
    free(temp) ;
    return head;

}         int main() {
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
   printf("before insertion\n");
		 display(head);
   printf("insert at begin\n");
		 head=insert_at_beginning(head,40);
		 display(head);
   printf("insert at end\n");
		 insert_at_end(head,50);
		 display(head);
  printf("delete at begin\n");
		head= delete_at_beginning(head);
		 display(head);
   printf("delete at end\n");
		 delete_at_end(head);
		 display(head);
   printf("insert at position\n");
		 insert_at_position(head,60,2);
		 display(head);
   printf("delete at position\n");
   delete_at_position(head,2);
		 display(head);
		 
		 }
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	
          
