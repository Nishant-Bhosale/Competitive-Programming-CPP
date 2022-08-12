/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int minNum = min(p->val, q->val);
        int maxNum = max(p->val, q->val);
        
        while(root != NULL){
           if(root->val < minNum){
                root = root->right;
           }else if(root->val > maxNum){
               root = root->left;
           }else{
               return root;
           }
        }
        
        return nullptr;
    }
};