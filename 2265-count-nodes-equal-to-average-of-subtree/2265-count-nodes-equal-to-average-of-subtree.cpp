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
class Solution {
public:int count=0;
    int fn(TreeNode*root,int &numNode)
    {
        if(root==NULL) return 0;
        int x=1;

        int sum=root->val+fn(root->left,x)+fn(root->right,x);
        numNode+=x;
        if(sum/x==root->val) count++;
         return sum;
        
    }
    int averageOfSubtree(TreeNode* root) {
      int numNode=0;
        fn(root,numNode);
        return count;
    }
};