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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size=preorder.size();
        int preIndex=0;
        int inorderStart=0;
        int inorderEnd=size-1;
        return build( preorder, inorder,size,preIndex,inorderStart,inorderEnd);

    }
int findPos(vector<int>& inorder,int size,int ele){
    for(int i=0;i<size;i++){
        if(inorder[i]==ele){
            return i;
        }
    }
}
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int size,int& preIndex,int inorderStart, int inorderEnd){
if(preIndex>size||inorderStart>inorderEnd){
    return NULL;
}

int element = preorder[preIndex++];
TreeNode* root=new TreeNode(element);
int pos=findPos(inorder,size,element);

//left
root->left= build(preorder, inorder,size,preIndex,inorderStart, pos-1);
    
    // right
    root->right= build( preorder,  inorder,size,preIndex,pos+1, inorderEnd);
  
  return root;
    }
};
