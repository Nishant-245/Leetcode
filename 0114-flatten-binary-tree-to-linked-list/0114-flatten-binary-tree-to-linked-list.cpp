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
    void flatten(TreeNode* root) {
        if(!root) return; 
        TreeNode* temp1= root->right;
        root->right=root->left;
        root->left=NULL;
        TreeNode* temp2 = root;
        while(temp2->right!=NULL){
            temp2=temp2->right;
        }
        temp2->right=temp1;
        flatten(root->right);

    }
};