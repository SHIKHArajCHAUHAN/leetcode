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
class CBTInserter {
public:
     TreeNode* node;
    queue<TreeNode*> que;
    CBTInserter(TreeNode* root) {
        node = root;
        que.push(root);    
    }
    
    int insert(int val) {
        while(!que.empty()){
            TreeNode* node = que.front();
            if(!node->left) {
                node->left = new TreeNode(val);
                return node->val;
            }
            else if(!node->right) {
                que.pop();
                node->right = new TreeNode(val);
                que.push(node->left);
                que.push(node->right);
                return node->val;
            }
            else{
                que.pop();
                que.push(node->left);
                que.push(node->right);
            }
        }
        
        return -1;
    }
    
    TreeNode* get_root() {
        return node;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */