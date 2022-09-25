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
public:
     bool helper(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL && root == NULL) return true;
        if (subRoot == NULL || root == NULL) return false;
        if (root->val != subRoot->val) return false;
        return helper(root->left, subRoot->left) && helper(root->right, subRoot->right);
    }/* void inorder(TreeNode * root,vector<int>&v1)
{
    if(root==NULL) return;
    inorder( root->left ,v1);
    v1.push_back(root->val);
    inorder(root->right,v1);
}
*/
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       //1 4 2 3 5
        //1 4 2 
        // 1 4 0 2 3 5
       if (root == NULL) return false;
        bool res = helper(root, subRoot);
        if (res) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        /* vector<int> v1;
        vector<int>v2;
        inorder(root,v1);
        inorder(subRoot,v2);
        
        for(int i=0;i<v1.size()-v2.size()-1;i++)
        {
            bool temp = 1;
            for(int j=i;j<v2.size();j++)
            {
                if(v1[i+j]!=v2[j])
                {
                    temp = false;
                    break;
                }
            }
            if(temp==1) return 1;
        } 
        return 0;*/
    
           
    }
};