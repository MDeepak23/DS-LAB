#include<stdio.h>
#define max 100
#include<stdlib.h>
int front=-1,rear=-1;
int queue[max];
void display()
{
    if(rear==-1 && front==-1)
    {
      printf("queue is empty\n");
      return ;
    }
    int i;
    for(i=front;i<=rear;i++)
    {
         printf("%3d",queue[i]);
    }
    printf("\n");
}
void enqueue(int d) {
   if(rear==max-1)
   {
     printf("queue is overflow\n");
     
   }
   else {
      front=0;
      scanf("%d",&d);   
      rear+=1; 
      queue[rear]=d;
 } 
     
}
int dequeue()
{
  int t;
  if(front == -1 && rear == -1 )
  {
      printf("queue is under flow\n");
      exit(1);
  }
      t = queue[front];
      front++;
      return t;
}
      int main() {
       int ch,d,t;
       while(1) {
       printf("1-enqueue  2-dequeue  3-display  4-exit \n");
       scanf("%d",&ch);
       switch(ch) {
            case 1:
               printf("enter the element that stores on queues\n");
               enqueue(d);
               break;
            case 2:
               
               t=dequeue();
               break;
            case 3:
               display();
               break;
            case 4:
               exit(2);
               break;
            default:
                printf("enter the value between 1-4\n");
                break;
     }
  }
}
                              
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
