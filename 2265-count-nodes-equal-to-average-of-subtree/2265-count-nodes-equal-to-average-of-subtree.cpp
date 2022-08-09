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
class Solution {/////can be done through pairs easily
public:pair<int,int> fn(TreeNode*root,int &numNode)
{
    if(root==NULL) return {0,0};
    pair<int,int>l=fn(root->left,numNode);
pair<int,int>r=fn(root->right,numNode);
int sum=root->val+l.second+r.second;
int den=l.first+r.first+1;
if(sum/den==root->val) numNode++;
return {den,sum};
}
    
    
    
    
    /*int count=0;
    int fn(TreeNode*root,int &numNode)
    {
        if(root==NULL) return 0;
        int x=1;

        int sum=root->val+fn(root->left,x)+fn(root->right,x);
        numNode+=x;
        if(sum/x==root->val) count++;
         return sum;
        
    }*/
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL) return 0;
      int numNode=0;
        fn(root,numNode);
       // return count;
        return numNode;
    }
};