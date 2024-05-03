#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
char infix[max],postfix[max];
char stack[max];
int top=-1;
void display();
void push(char);
char pop();
int precedence(char x);
void infix_to_posfix();
void display()
{
      int i;
      for(i=0;postfix[i]!='\0';i++){
      printf("%c",postfix[i]);
}
}
void push(char x)
{  
     
      if(top == max-1) {
      printf("stack is over flow\n");
 	return;
 	}
     
      top++;
      stack[top]=x;
     
}

char pop()
{
   int temp;
   if(top == -1){
   printf("stack is under flow\n");
   exit(1);
   }
   else{
   temp=stack[top];
   top--;
   return temp;
   } 
   
   
    
}
int precedence(char x)
{
   if(x == '(')
   return 0;
   if(x == '+' || x == '-')
   return 1;
   if(x == '*' || x == '/') 
   return 2;
   if(x == '^')
   return 3;
}
void infix_to_posfix()
{
   int i,j=0;
   char sym,next;
   for(i=0;infix[i]!='\0';i++){
   sym = infix[i];
   if(sym == '('){
      push(sym);
   }
   else if(sym == ')')
   {
     while((next = pop())!= '('){
     	postfix[j++]=next;
     }
   }
   else if(sym == '+' || sym == '-' || sym == '*' || sym == '/')
   {
     while(top!=-1 && precedence(stack[top]) >= precedence(sym))
       postfix[j++]=pop();
     push(sym);
   }
    else 
   {
      postfix[j++]=sym;
   }
}
   while(top!=-1) {
      postfix[j++]=pop();
   
postfix[j]='\0';
}
}

   int main(){
    printf("enter the infix expr\n");
    scanf("%s",infix);
    infix_to_posfix();
    printf("The infix expr is :");
    display();
    printf("\n");
   
}
       
   
   
   
   
			
