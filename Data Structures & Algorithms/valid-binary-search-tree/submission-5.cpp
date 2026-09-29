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
    bool valid(TreeNode* root, long left,long right){
        if(root==NULL){
            return true;
        }
        if(!(left<root->val&&root->val<right)){
            return false;
        }
        return valid(root->left,left,root->val)&&valid(root->right,root->val,right);
    }
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        // if(root->left&&root->val>root->left->val){
        //     return true
        // }else{

        // }
      
      return valid(root,LONG_MIN,LONG_MAX);


    }
};
