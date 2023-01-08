//exp7 bst
#include <iostream>
using namespace std;
 
struct node {
int data;
    struct node* left;
    struct node* right;
 };

 node* createnode(int val)
 {
   node *ptr=new node(); 
   ptr->data=val;
   ptr->left=NULL;
   ptr->right=NULL; 
    return ptr;
 }
 
 node* insertnode(node* root ,int val)
{ 

  if(root == NULL)
  root=createnode(val);
  else if(val<root->data)
root->left= insertnode(root->left,val);
  else
  root->right= insertnode(root->right,val);
  return root;
}

void preorder(node *root)
{
 cout<<root->data;
 if(root->left==NULL)
 
 preorder(root->left);
 
 preorder(root->right);   
}

void inorder(node *root)
{inorder(root->left);
cout<<root->data;
inorder(root->right);
}

void postorder(node *root)
{
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void searchnode(node *root,int item)
{
 if (root->data==item)
  cout<<"element is found";
    else if( root->data>item){
   searchnode(root->left,item );
    }
    else
    {searchnode(root->right,item);
    }
}






int main()
{int ch,val;node *root=NULL;int item;int next;
while(1){
    cout<<" menu \n1.insert element\n2 inoder\n3preorder\n4post order \n5 search node"<<endl;
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:
    {
      
      
      while (next)
      {cout<<"enter the element that you want to store";
    cin>>val;
root =insertnode(root,val);
cout<<"do you want to insert more type 0/1";
cin>>next;
      }
 
    }break;
     
    case 2:
    preorder(root);
    break;
    case 3:
    inorder(root);
    break;
    case 4:
    postorder(root);
    break;
    case 5:
    {
    cout<<"enter item that you want to search";
    cin>>item;
searchnode(root,item);
    }
    default :
    cout<<"enter  a correct choice";
}
}
return(0);

}

