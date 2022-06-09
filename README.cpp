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
int main()
{
  Node *root=Node(1);
  root->left=Node(2);
  root->right=Node(3);
  root->left->left=Node(4);
  root->left->right=Node(5);
  return 0;
}
