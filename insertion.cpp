#include "structhead.h"
using namespace std;

node* newnode(char ch)
{
    node *tmp=new node();
    tmp->data=ch;
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}

node* insert(node *root)
{
    root=newnode('a');
    root->left=newnode('b');
    root->right=newnode('c');
    root->left->left=newnode('d');
    root->left->right=newnode('e');
    root->right->left=newnode('f');
    root->right->right=newnode('g');
    root->left->left->left=newnode('h');
    root->left->left->right=newnode('i');
    root->right->right->left=newnode('l');
    root->right->right->left->left=newnode('n');
    root->right->right->left->left->left=newnode('p');
    root->right->right->right=newnode('m');
    root->right->right->right->right=newnode('r');
    root->right->right->right->left=newnode('q');
    root->right->right->right->left->left=newnode('s');
    root->right->right->right->left->left->right=newnode('t');
    return root;

}