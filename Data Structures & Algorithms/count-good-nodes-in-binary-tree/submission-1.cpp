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
    int sumVal(TreeNode* root,int val){
        if(root==NULL){
            return 0;
        }
int res=(root->val>=val)?1:0;

       val=max(root->val,val);
       res+= sumVal(root->left,val);
       res+=sumVal(root->right,val);
       return res;
    }
    int goodNodes(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }

        int val=root->val;
      int ans=sumVal(root,val);

       return ans;

    
    }
};
