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
class BSTIterator {
public:vector<int>v;
    int i=0;
    void ino(TreeNode* root)
    { if(root==NULL) return;
        ino(root->left);
        v.push_back(root->val);
        ino(root->right);
    }
    BSTIterator(TreeNode* root) {
        
      ino(root);
        
    }
    
    int next() {
    int  x=v[i];
        i++;
        return x;
    }
    
    bool hasNext() {
       if(i<v.size()) return true;//n=5 1=0 to4
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */