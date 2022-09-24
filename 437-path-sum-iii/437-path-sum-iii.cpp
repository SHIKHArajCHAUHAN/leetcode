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
class Solution {int count=0;
public:
    void fn(TreeNode *root,long long sum,int targetsum)
    {
        if(root==NULL) return;
        sum+=root->val;
        if(sum==targetsum) count++;
        fn(root->left,sum,targetsum);
        fn(root->right,sum,targetsum);
    }
 void pre(TreeNode* root,int targetSum){
    if(root==NULL)return ;
    
    fn(root,0,targetSum);
    
    pre(root->left,targetSum);
    pre(root->right,targetSum);
}
    int pathSum(TreeNode* root, int targetSum) {
        pre(root,targetSum);
       return count; 
    }
};