#include<stdio.h>
int a[100],top,n,k,i;
void display();
void push();
void pop();
void display(){
if(top==0){
printf("Stack is empty");
}
else{
for(i=top;i>=0;i--){
  printf("%d",a[i]);
}

}
}


void push() {
if(top>=n-1)
{
  printf("stack is overflow\n");
  
} 
  else {
  printf(" enter the data to store on top\n");
  scanf("%d",&k);
  top++;
  a[top]=k;

}
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
       printf("\n The popped elements is %d",a[top]);
        top--;
    }
}
    int main() {
    int ch;
    top = -1;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    printf("1:push 2:pop 3:display\n");
    do {
    printf("enter the choice value:\n");
    scanf("%d",&ch);
    switch(ch) {
    case 1: push();
           break;
    case 2: pop();
           break;
    case 3: display();
           break;
   
    default: printf("please i kindly request to enter the value between 1-3\n");break;
    }
    }
    while(ch!=4);
    
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

