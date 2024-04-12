#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
  struct node *next;
}*top=NULL;
void display(){
   struct node *ptr=top;
   while(ptr!=NULL){
   printf("%3d",ptr->data);
   ptr=ptr->next;
}
}
void push(int data){
   struct node*temp=malloc(sizeof(struct node *));
   temp->data=data;
   temp->next=NULL;
   temp->next=top;
   top=temp;
   return;
}
void pop(){
   struct node *ptr=top;
   top = top->next;
   ptr=NULL;
   free(ptr);
   return;
}

  int main() {
   
    int ch,data;
    printf("1:push 2:pop 3:display\n");
    do {
    printf("enter the choice value:\n");
    scanf("%d",&ch);
    switch(ch) {
    case 1: printf("enter the size of top data\n");
           scanf("%d",&data);
           push(data);
           break;
    case 2: pop();
           break;
    case 3: display();
           break;
   
    default: printf("please enter the value between 1-3\n");break;
    }
    }
    while(ch!=3);
    
    }
    
    
