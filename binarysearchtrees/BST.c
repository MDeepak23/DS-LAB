#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node* left;
       struct node* right;
};
struct node* create_node(int d){
    struct node *temp=malloc(sizeof(struct node *));
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node* insert(struct node* root,int d)
{
    if(root == NULL) {
       return create_node(d);
    }
    else {
       if(d < root->data)
           root->left = insert(root->left,d);
       else if(d > root->data)
           root->right = insert(root->right,d);
   }
   return root;
}
void inorder(struct node* root) {
    if(root->left != NULL) {
        inorder(root->left);
    }
    printf("%3d" ,root->data);
     printf("\n");
    if(root->right != NULL) {
        inorder(root->right);
    }  
}
void preorder(struct node* root) {
    printf("%3d" ,root->data);
     printf("\n");
    if(root->left != NULL) {
        preorder(root->left);
    }
    if(root->right != NULL) {
        preorder(root->right);
    }  
}
void postorder(struct node* root) {
    if(root->left != NULL) {
        postorder(root->left);
    }
    if(root->right != NULL) {
        postorder(root->right);
    }  
     printf("%3d" ,root->data);
     printf("\n");
}
    
    int main() {
    struct node *root=NULL;
    root=insert(root,50);
    root=insert(root,30);
    root=insert(root,70);
    printf("INORDER :\n");
    inorder(root);
    printf("PREORDER :\n");
    preorder(root);
    printf("POSTORDER :\n");
    postorder(root);
}














