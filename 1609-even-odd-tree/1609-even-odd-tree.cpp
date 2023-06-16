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
private:
 bool isIncreasing(vector<int> &arr) {
        if(arr.size() == 1) {
            if(arr[0] % 2 != 0)
                return true;
            else
                return false;
        }
        
        for(int i = 0; i < arr.size() - 1; ++i) {
            if(arr[i] % 2 == 0 || arr[i + 1] % 2 == 0)
                return false;
        
            if(arr[i] >= arr[i + 1])
                return false;
        }
        
        return true;
    }
    
    bool isDecreasing(vector<int> &arr) {

        if(arr.size() == 1) {
            if(arr[0] % 2 == 0)
                return true;
            else
                return false;
        }
        
        for(int i = 0; i < arr.size() - 1; ++i) {
            if(arr[i] % 2 != 0 || arr[i + 1] % 2 != 0)
                return false;
        
            if(arr[i] <= arr[i + 1])  
                return false;
        }

        return true;
    }

public:
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL)
            return false;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool flag = false;
        int level = -1;
        
        while(!q.empty()) {
            
            int size = q.size();
            vector<int> data;
            
            level++;
            
            while(size--) {
                TreeNode* t = q.front(); q.pop();
                
                data.push_back(t->val);
                
                if(t->left)
                    q.push(t->left);
                
                if(t->right)
                    q.push(t->right);
                
            }
            if(level % 2 != 0) {
                if(isDecreasing(data))
                    flag = true;
                else
                    return false;
            } 
            else { 
                if(isIncreasing(data))
                    flag = true;
                else
                    return false;
            }
        
        }
        return true;
    }
};