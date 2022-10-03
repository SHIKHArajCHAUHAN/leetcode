/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
       if(root==NULL) return "";
      string s=""; 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto now=q.front();
            q.pop();
            if(now==NULL) s.append("#,");
            else {s.append(to_string(now->val)+',');
                q.push(now->left);
                q.push(now->right);
                 }
        }
            return s;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
          if(data.length()==0) return NULL;
        stringstream s(data);
        string str;
        getline(s,str,','); 
        queue<TreeNode*> q;
        if(str=="#") return NULL;
        TreeNode* root=new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
                getline(s,str,',');
                if(str=="#") temp->left=NULL;
                else {
                    TreeNode* l=new TreeNode(stoi(str));
                    temp->left=l;
                    q.push(l);
                }
                getline(s,str,',');
                if(str=="#") temp->right=NULL;
                else {
                    TreeNode* r=new TreeNode(stoi(str));
                    temp->right=r;
                    q.push(r);
                }
        }
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));