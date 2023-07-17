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
     int lastResult = INT_MIN;
    TreeNode* sufficientSubset(TreeNode* root, int limit, int currSum = 0) {
        if (root -> left == nullptr && root -> right == nullptr) {
            lastResult = root -> val;
            return currSum + root -> val < limit ? nullptr : root;
        }
        int leftResult = INT_MIN, rightResult = INT_MIN;
        if (root -> left != nullptr) {
            root -> left = sufficientSubset(root -> left, limit, currSum + root -> val);
            leftResult = lastResult;
        }
        if (root -> right != nullptr) {
            root -> right = sufficientSubset(root -> right, limit, currSum + root -> val);
            rightResult = lastResult;
        }
        lastResult = max(leftResult, rightResult) + root -> val;
        return lastResult + currSum < limit ? nullptr : root;
    }
};