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
    int maxH = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int h = maxHeight(root);
        return maxH;
    }
    
public: 
    int maxHeight(TreeNode* node){
        if(node == NULL){
            return 0;
        }
        
        int lh = maxHeight(node->left);
        int rh = maxHeight(node->right);
        
        maxH = max(maxH, lh + rh);
        return 1 + max(lh, rh);
    }
};