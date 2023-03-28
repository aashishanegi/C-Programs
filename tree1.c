#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* root;


struct node* create()
{
    int choice;
    struct node * temp;
    int data;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Press 1 for new mode\n");
    printf("Press 0 to exit\n");
    scanf("%d",&choice);
    if (choice==0)
    return 0;
    else
    {
        printf("Enter Data  ");
        scanf("%d",&data);
        temp->data=data;
        printf("Enter choice for left child for %d\n",data);
        temp->left=create();
        printf("Enter choice for right child for %d\n",data);
        temp->right=create();
        return temp;
    }
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left); 
        printf("%d", root->data); 
        inorder(root->right);
    }
}
void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d", root->data); 
        inorder(root->left); 
        inorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left); 
        inorder(root->right);
        printf("%d", root->data); 
    }
}
void main(){
    root=create();
    printf("Inorder Traversal\n");
    inorder(root);
    printf("\nPreorder Traversal\n");
    preorder(root);
    printf("\nPostorder Traversal\n");
    postorder(root);
}
