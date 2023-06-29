/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
class Solution {
public:
    long SUM=0;
    long maxpro=0;
    int findsum(TreeNode*root)
    {
        if(root==0)
        {
            return 0;
        }
        int rightsubtree=findsum(root->right);
        int leftsubtree=findsum(root->left);
        long sum=root->val+rightsubtree+leftsubtree;
        return sum;
    }
    int find(TreeNode* root)
    {
        if(root==0)
        {
            return 0;
        }
        long leftsubtree=find(root->left);
        long rightsubtree=find(root->right);
        long sumtotal=root->val+leftsubtree+rightsubtree;
        long remainingsum=SUM-sumtotal;
        maxpro=max(maxpro,sumtotal*remainingsum);
        return sumtotal;

    }
    int maxProduct(TreeNode* root) {
        
        SUM=findsum(root);
        find(root);
        return maxpro%1000000007;
    }
};