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
   map<int, vector<TreeNode*>> mp;
    vector<TreeNode*> allPossibleFBT(int n) {
        //even k liy nhi ho skta hai q ki y bola hai ki full binary tree hi jiska child 2 hi ya 0 possible hi wrna nhi to ek node k liy we nee two child so entirly it will be of odd in number
        /// second thing is that we can choose any node to make it as a paent node
        
            vector<TreeNode*> v;
            if(n == 1){
                v.push_back(new TreeNode(0));
                return v;
            }else if(n % 2 == 1){
                for(int i = 1;i < n;i+=2){

                    for(auto l : allPossibleFBT(i)){
                        for(auto r : allPossibleFBT(n-i-1)){
                            TreeNode* temp = new TreeNode(0);
                            temp->left = l;
                            temp->right = r;
                            v.push_back(temp);
                        }
                    }
                }
            }
          

        
        return v;
    }
};