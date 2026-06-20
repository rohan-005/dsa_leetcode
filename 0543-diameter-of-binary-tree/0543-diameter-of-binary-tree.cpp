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
#include <algorithm>
class Solution {
public:
    int diameter = 0;
    int height(TreeNode* root){
        int count = 0;
        if(root == NULL) return 0;

        int dleft = 0;
        int dright = 0;

        dleft = height(root->left);
        dright = height(root->right);
        diameter = std::max(diameter ,dleft+dright);

        return 1 + max(dleft,dright);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
