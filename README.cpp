//print nodes at distance k in binary tree
#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node *left,right;
  Node(int x)
  {
    data=x;
    left=right=NULL;
  }
};

void print(Node *root,int k)
{
  if(root!=NULL)
  {
    if(k==0)
      cout<<root->data<<" ";
    print(root->left,k-1);
    print(root->right,k-1);
  }
}

int main()
{
  Node *root=Node(1);
  root->left=Node(2);
  root->right=Node(3);
  root->left->left=Node(4);
  root->left->right=Node(5);
  print(root,2);
  return 0;
}
