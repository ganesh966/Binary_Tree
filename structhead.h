#ifndef STRUCTHEAD
#define STRUCTHEAD

#include<bits/stdc++.h>
struct node
{
    char data;
    struct node *left;
    struct node *right;
};

//insertion
node* insert(node *root);
node* newnode(char ch);

//traverse
void inorder(node *root);
void preorder(node *root);
void postorder(node *root);
void bfs(node *root);
void spiral(node *root);
void vertical_order(node *root);

//views
void topview(node *root);
void bottomview(node *root);
void left_view(node *root);
void right_view(node *root);

#endif
