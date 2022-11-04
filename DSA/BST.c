#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *newNode(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
};

struct node * insert(struct node *node,int key)
{
    if(node==NULL)
    {
        newNode(key);
    }
    if(key<node->key)
    {
        node->left=insert(node->left,key);
    }
    else if(key>node->key){
        node->right=insert(node->right,key);
    }
};

void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->key);
        inorder(root->right);
    }
}

void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    struct node* root=NULL;
    root = insert (root,33);
    insert (root,51);
    insert (root,11);
    insert (root,23);
    insert (root,77);

    inorder(root);
    preorder(root);
    return 0;
}
