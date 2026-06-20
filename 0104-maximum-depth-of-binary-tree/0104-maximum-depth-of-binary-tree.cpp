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
    int maxDepth(TreeNode* root) {
        int count = 0;
        if(root == NULL) return 0;

        int dleft = 0;
        int dright = 0;

        dleft = maxDepth(root->left);
        dright = maxDepth(root->right);
        int max = 0;
        if(dleft>dright) max = dleft;
        else max = dright;
        count  = 1 + max;
        return count;
        // if(root->left || root->right){
        //     count++;
        //     maxDepth(root->left);
        //     maxDepth(root->right);
        // }

        // if(root->right == NULL){
            
        //     // count++;
        // }
        // else if(root->left == NULL){
            
        //     // count++;
        // }
        // else{
        //     maxDepth(root->left);
        // }
        

        
    }
};
