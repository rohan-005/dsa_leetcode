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
    int res = INT_MIN;
    int getmax(TreeNode* node){
        if(!node) return 0;
        int left = getmax(node->left);
        int right = getmax(node->right);

        int path = node->val + max(left,right);

        return max(0,path);
    }

    void dfs(TreeNode* node){
        if(!node) return;
        int left = getmax(node->left);
        int right = getmax(node->right);
        res = max(res, node->val + left+right);

        dfs(node->left);
        dfs(node->right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return res;
    }
};
