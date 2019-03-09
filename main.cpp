#include "structhead.h"
using namespace std;

node *root=NULL;

int main()
{
    l:
    cout<<"************BINARY_TREE*************"<<endl;
    cout<<"    PRESS 1.INSERTION"<<endl;
    cout<<"    PRESS 2.TRAVERSE"<<endl;
    cout<<"    PRESS 3.DIFFERENT VIEWS"<<endl;
    cout<<"Enter ur choice..."<<endl;
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            root=insert(root);
            cout<<"Default value inserted sucessfully.. "<<endl;
            break;
        }
        case 2:
        {
            l1:
            cout<<"\t1.PREORDER"<<endl;
            cout<<"\t2.INORDER"<<endl;
            cout<<"\t3.POSTORDER"<<endl;
            cout<<"\t4.LEVEL ORDER"<<endl;
            cout<<"\t5.SPIRAL"<<endl;
            cout<<"\t6.VERTICAL ORDER"<<endl;
            cout<<"Enter ur choice..."<<endl;
            int ch;
            cin>>ch;
            switch(ch)
            {
                case 1:
                {
                    preorder(root);
                    cout<<endl;
                    break;
                }
                case 2:
                {
                    inorder(root);
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    postorder(root);
                    break;
                }
                case 4:
                {
                    bfs(root);
                    cout<<endl;
                    break;
                }
                case 5:
                {
                    spiral(root);
                    break;
                }
                case 6:
                {
                    vertical_order(root);
                    break;
                }
            }
            cout<<"press 0 to continue.."<<endl;
            int p;
            cin>>p;
            if(p==0)
            goto l1;
            break;
        }
        case 3:
        {
            l2:
            cout<<"\t1.TOP VIEW "<<endl;
            cout<<"\t2.BOTTOM VIEW"<<endl;
            cout<<"\t3.LEFT VIEW"<<endl;
            cout<<"\t4.RIGHT VIEW"<<endl;
            cout<<"Enter ur choice.."<<endl;
            int ch;
            cin>>ch;
            switch(ch)
            {
                case 1:
                {
                    topview(root);
                    break;
                }
                case 2:
                {
                    bottomview(root);
                    break;
                }
                case 3:
                {
                    left_view(root);
                    break;
                }
                case 4:
                {
                    right_view(root);
                    break;
                }
            }
            cout<<"press 0 to continue.."<<endl;
            int p;
            cin>>p;
            if(p==0)
            goto l2;
            break;
        }
        default:
        return 0;
    }
    goto l;
}