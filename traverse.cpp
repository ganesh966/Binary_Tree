#include "structhead.h"
using namespace std;

void inorder(node *root)
{
    stack<node*> st;
   while(1)
   {
       while(root)
       {
           st.push(root);
           root=root->left;
       }
       if(st.empty())break;
       root=st.top();
       st.pop();
       cout<<root->data<<" ";
       root=root->right;
   }
}

void preorder(node *root)
{
    stack<node*> st;
    while(1)
    {
       while(root)
       {
           cout<<root->data<<" ";
           st.push(root);
           root=root->left;
       }
       if(st.empty())break;
       root=st.top();
       st.pop();
       root=root->right;
    }
}

void postorder(node *root)
{
    if(!root)return ;
    stack<node*> st;
    st.push(root);
    stack<char> out;
    while(!st.empty())
    {
        node *curr=st.top();
        st.pop();
        out.push(curr->data);
        if(curr->left)
        st.push(curr->left);
        if(curr->right)
        st.push(curr->right);  
    }

    while(!out.empty())
    {
        cout<<out.top()<<" ";
        out.pop();
    }
    cout<<endl;
}


void bfs(node *root)
{
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        node *tmp=qu.front();
        qu.pop();
        cout<<tmp->data<<" ";
        if(tmp->left)
        {
            qu.push(tmp->left);
        }
        if(tmp->right)
        {
            qu.push(tmp->right);
        }
    }
}


void spiral(node *root)
{
    stack<char> st;
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    st.push(root->data);
    int count=1;
    while(qu.front())
    {
        if(count%2!=0)
        {
            while(!st.empty())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<st.top()<<" ";
                st.pop();
                if(tmp->left)
                qu.push(tmp->left);
                if(tmp->right)
                qu.push(tmp->right);
            }
        }
        else
        {
            while(qu.front())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<tmp->data<<" ";
                if(tmp->left)
                {
                    qu.push(tmp->left);
                    st.push(tmp->left->data);
                }
                if(tmp->right)
                {
                    qu.push(tmp->right);
                    st.push(tmp->right->data);
                }
            }
        }
        qu.pop();
        qu.push(NULL);
        count++;
    }
    cout<<endl;
}


void vertical_order(node *root)
{
    map<int,vector<char> > mp;
    queue<pair<node*,int> > qu;
    qu.push(make_pair(root,0));
    while(!qu.empty())
    {
        pair<node*,int> pr=qu.front();
        qu.pop();
        node *tmp=pr.first;
        int level=pr.second;
        mp[level].push_back(tmp->data);
        if(tmp->left)
        {
            qu.push(make_pair(tmp->left,level-1));
        }
        if(tmp->right)
        {
            qu.push(make_pair(tmp->right,level+1));
        }
    }

    map<int,vector<char> >::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"level="<<it->first<<": ";
        for(int i=0;i<it->second.size();i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }

}