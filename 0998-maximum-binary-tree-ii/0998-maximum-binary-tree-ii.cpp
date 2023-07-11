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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
      //1)if val>root->val then newnode->next=root return newnode
        //2)
          TreeNode * x = new TreeNode(val);

        if(!root ){
            return x;
        }

        if( root -> val < val){
            x -> left =  root;
            return x;
        }
        TreeNode * temp = root;
        while(true){
            if(!temp -> right){ 
                temp -> right = x;
                return root;
            }

            else{
                if(temp -> right -> val < val){
                    TreeNode * temp2 = temp -> right;
                    temp -> right = x;
                    x -> left =  temp2;
                    return root;
                }
                else{
                    temp = temp -> right;
                }
            }
        }
        return root;
  
    }
};