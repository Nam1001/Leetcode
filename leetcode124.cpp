#include<bits/stdc++.h>
using namespace std;
int pathsum(TreeNode*root,int &maxi)
{
    if(root==0)
    {
        return 0;

    }
    int leftsum=pathsum(root->left,maxi);
    int rightsum=pathsum(root->right,maxi);
    maxi=max(maxi,root->val+leftsum+rightsum);
    return root->val+max(rightsum,leftsum);
}

int maxpathsum(TreeNode*root);
{
    int maxi=-1e9;
    pathsum(root,maxi);
    cout<<maxi;
}
