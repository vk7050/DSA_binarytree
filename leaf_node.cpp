#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data; 
  Node *left,*right;
  Node(int x)
  {
    data=x;
    left=right=NULL;
  }
};

void print_leafnode(Node *root)
{
  if(root->left==NULL && root->right==NULL)
    cout<<root->data<<" ";
  if(root->left!=NULL)
    print_leafnode(root->left);
  if(root->right!=NULL)
    print_leafnode(root->right);
}

int main()
{
  Node *root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  print_leafnode(root);
  return 0;
}
