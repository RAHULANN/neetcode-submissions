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
    int  hightget(TreeNode* root){
           if(root==NULL){
            return 0;
        }
        int lsum=hightget(root->left);
        int rsum=hightget(root->right);
        return max(lsum,rsum)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lsum=hightget(root->left);
        int rsum=hightget(root->right);
      if(abs(lsum-rsum)>1){
        return false;
      }
     bool l= isBalanced(root->left);
     bool r= isBalanced(root->right);
     if(l&&r){
        return true;
     }

return false;


    }
};
