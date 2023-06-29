#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*right;
    struct node*left;
    node(int value)
    {
        data=value;
        right=0;
        left=0;
    }

};
int solve (struct node * root,map<struct node*,int>&mpp)
{
   
    if(root==0)
    {
        return 0;
    }
    if(mpp.find(root)!=mpp.end()) return mpp[root];
    int sum=root->data;
    if(root->left!=0)
    {
        sum+=solve(root->left->left,mpp);
        sum+=solve(root->left->right,mpp);
    }
    if(root->right!=0)
    {
        sum+=solve(root->right->left,mpp);
        sum+=solve(root->right->right,mpp);
    }
    int next_sum=solve(root->left,mpp)+solve(root->right,mpp);
    int res=max(sum,next_sum);
    return mpp[root]=res;

}

int main()
{
  struct node*root;
  root=new node(3);
  root->right=new node(5);
  root->left=new node(4);
  root->right->right=new node (1);
  root->left->right=new node(3);
  root->left->left=new node(1);
//   vector<int>dp(1000,-1);
  map<struct node*,int>mpp;
  cout<< solve(root,mpp);

 


   
}
