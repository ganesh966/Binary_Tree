#include "structhead.h"
using namespace std;


void topview(node *root)
{
    queue<pair<node*,int> > qu;
    map<int,char> mp;
    qu.push(make_pair(root,0));
    map<int,char>::iterator it;
    while(!qu.empty())
    {
        pair<node*,int> tmp=qu.front();
        qu.pop();
        node *tmp1=tmp.first;
        int level=tmp.second;
        it=mp.find(level);
        if(it==mp.end())
        {
            mp[level]=tmp1->data;
        }

        if(tmp1->left)
        {
            qu.push(make_pair(tmp1->left,level-1));
        }
        if(tmp1->right)
        {
            qu.push(make_pair(tmp1->right,level+1));
        }
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second<<" ";
    }
cout<<endl;
}


void bottomview(node *root)
{
    queue<pair<node*,int> > qu;
    map<int,char> mp;
    map<int,char>::iterator it;

    qu.push(make_pair(root,0));
    while(!qu.empty())
    {
        pair<node*,int> tmp=qu.front();
        qu.pop();
        node *tmp1=tmp.first;
        int level=tmp.second;
        mp[level]=tmp1->data;

        if(tmp1->left)
        {
            qu.push(make_pair(tmp1->left,level-1));
        }
        if(tmp1->right)
        {
            qu.push(make_pair(tmp1->right,level+1));
        } 
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}


void left_view(node *root)
{
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    while(qu.front())
    {
        cout<<qu.front()->data<<" ";
        while(qu.front())
        {
            node *tmp=qu.front();
            qu.pop();
            if(tmp->left)
            qu.push(tmp->left);
            if(tmp->right)
            qu.push(tmp->right);

        }
        qu.pop();
        qu.push(NULL);

    }
    cout<<endl;
}

void right_view(node *root)
{
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    node *tmp;
    while(qu.front())
    {
        while(qu.front())
        {
            tmp=qu.front();
            qu.pop();
            if(tmp->left)
            qu.push(tmp->left);
            if(tmp->right)
            qu.push(tmp->right);
        }
        cout<<tmp->data<<" ";
        qu.pop();
        qu.push(NULL);
    }
    cout<<endl;

}