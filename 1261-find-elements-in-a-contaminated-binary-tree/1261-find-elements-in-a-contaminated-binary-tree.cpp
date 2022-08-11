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
class FindElements {set<int>s;
public:
    void fn(TreeNode* root)
    {
        if(!root) return;
        
        if(root->left)
        { root->left->val = root->val*2 + 1;
        s.insert(root->left->val);}
        if(root->right)
        { root->right->val = root->val*2 + 2;
         s.insert(root->right->val);}
        fn(root->left);
        fn(root->right);
    }
    FindElements(TreeNode* root) {
        if(root)  { root->val=0;
            s.insert(root->val);}
        fn(root);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end()) return 1;
        return 0;
        
        
        
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */