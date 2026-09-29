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
    int maxHight(TreeNode* root){
        if(root==NULL){
            return 0;
        };

        int lm=maxHight(root->left);
        int rm=maxHight(root->right);
        return max(lm,rm)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        };

        int maxLeft=diameterOfBinaryTree(root->left);
        int maxRight=diameterOfBinaryTree(root->right);
        int op3= maxHight(root->left)+maxHight(root->right) ;

        return max(maxLeft,max(maxRight,op3));
    }
};
