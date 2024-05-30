#include<stdio.h>
#include<stdlib.h>
#define size 7
struct node
{
    int data;
    struct node *next;
};
struct node *chain[size];
void init()
{
    int i;
    for(i=0;i<size;i++) 
    chain[i]=NULL;
}
void insert(int value)
{
    struct node*newnode=malloc(sizeof(struct node *));
    newnode->data=value;
    newnode->next=NULL;
    int key=value%size;
    if(chain[key]==NULL )
    {
        chain[key]=newnode;
    }
    else {
            
    struct node *temp=chain[key];
    while(temp->next)
    {
        temp=temp->next;
    }
      temp->next=newnode;
}
}
int search(int value)
{
    int key=value%size;
    struct node*temp=chain[key];
    while(temp)
    {
        if(temp->data==value)
        return 1;
        temp=temp->next;
    }
    return 0;
}
int delete(int value)
{
    int key=value%size;
     struct node*temp=chain[key],*dealloc;
     if(temp!=NULL)
     {
        if(temp->data==value)
        {
            dealloc=temp;
            temp=temp->next;
            free(dealloc);
            return 1;

        }
        else
        {
            while(temp->next)
            {
                if(temp->next->data==value)
                {
                    dealloc=temp->next;
                    temp->next=temp->next->next;
                    free(dealloc);
                    return 1;
                }
                 temp=temp->next;

            }
           
        }
     }
     return 0;
}
void print()
{
    int i;
    for(i=0;i<size;i++)
    {
    struct node*temp=chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");

    }
}
int main()
{
    init();
    insert(7);
    insert(0);
    insert(3);
    insert(10);
    insert(4);
    insert(5);
    print();
    if(search(10))
    printf("search is found\n");
    else
    printf("search is not found\n");
    if(delete(10))
    print();
}