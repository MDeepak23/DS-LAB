
#include<stdio.h>
#include<stdlib.h>
  struct node{
   int data;
   struct node *next;
   };
      int main(){
        int count;
        struct node *head=NULL;
        head=malloc(sizeof(struct node ));
        head->data = 10;
        head->next = NULL;
      
        struct node *current=malloc(sizeof(struct node ));  
         current-> data = 20;
         current-> next= NULL;
         head->next=current;
          
        current=malloc(sizeof(struct node ));   
         current-> data = 30;
         current-> next=NULL;
         head->next->next=current;
         struct node *ptr1=head;
         ptr1=malloc(sizeof(struct node * ));
         head=head->next;
         ptr1=NULL;
         free(ptr1);
         
         struct node *ptr=head;
         

         while(ptr!= NULL)
         { 
            
            printf("%3d",ptr->data);
            ptr=ptr->next;
            count++;
            
        }
          printf("\n%d\n",count);
        }
            
          
         
