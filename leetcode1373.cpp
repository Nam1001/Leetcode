
class Solution {
public:
    int max1 = 0;
    
    vector<int> isBst(TreeNode* root)
    {
        if(!root) return {0, INT_MIN, INT_MIN};
        if(!root->left && !root->right)
        {
            max1 = max(max1, root->val);
            return {root->val, root->val, root->val};
        }
        vector<int> left = isBst(root->left);
        vector<int> right = isBst(root->right);
        
        if(left[0] != INT_MIN && right[0] != INT_MIN)
        {
            if(root->left != NULL && left[1] >= root->val) return {INT_MIN, INT_MIN, INT_MIN};
            
            if(root->right != NULL && right[2] <= root->val) return {INT_MIN, INT_MIN, INT_MIN};
         
            int sum = left[0] + right[0] + root->val;     // current sum
            
            max1 = max(sum,max1);                           //result till now
            
            int maxTillNow = 0;
            if(left[1]==INT_MIN)     //Dont consider left subtree if it does  not exist eg:{16,null,17}          
                maxTillNow = max(root->val, right[2]);  
            else      //dont consider right subtree if does not exist eg: {16,15,null}
                maxTillNow = max(left[1], max(root->val, right[2]==INT_MIN? root->val:right[2]));
            
            int minTillNow = 0;			
            if(right[2]==INT_MIN)    //dont oconsider right subtree if it does not exist eg:{16,15,null}
                minTillNow = min(root->val, left[1]);  
			else    //dont consider left subtree if it does not exist eg:{16,null,17}
                minTillNow = min(right[2], min(root->val, left[1]==INT_MIN? root->val:left[1]));       
            
            return {sum, maxTillNow, minTillNow};
        }
        return {INT_MIN, INT_MIN, INT_MIN};
    }
    int maxSumBST(TreeNode* root) {
        isBst(root);
        return max1;
    }
};