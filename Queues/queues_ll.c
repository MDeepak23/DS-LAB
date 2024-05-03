#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node * create_node(int );
struct node * create_node(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node *));
	temp->data=data;
	temp->next=NULL;
	return temp;
}
int isEmpty();
int isEmpty()
{
	if(front==NULL)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}
void display();
void display()
{
	struct node *ptr=front;
	while(ptr!=NULL)
	{
		printf("%4d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void enqueue(int );
void enqueue(int data)
{
	struct node *temp=create_node(data);
	if(isEmpty())
	{
		front=temp;
	}
	if(rear!=NULL)
	{
		rear->next=temp;
	}
	rear=temp;
	
}
int dequeue();
int dequeue()
{
	struct node *ptr=front;
	if(ptr==NULL)
	{
		printf("Queue is empty\n");
		exit(1);
	}
	if(ptr!=rear)
	{
		 front=front->next;
	}
	else
	{
		front=rear=NULL;
	}
	int d=ptr->data;
	free(ptr);
	return d;
	
}
int main() 
{
	enqueue(10);
	enqueue(20);
	display();
	printf("Dequeued element is:%d\n",dequeue());
	printf("Dequeued element is:%d\n",dequeue());
	return 0;
}
