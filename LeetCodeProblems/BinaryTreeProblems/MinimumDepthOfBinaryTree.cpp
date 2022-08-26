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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
//         if(root->left == NULL && root->right == NULL){
//             return 1;
//         }
        
//         int lh = INT_MAX, rh = INT_MAX;
        
//         if(root->left) lh = minDepth(root->left);
//         if(root->right) rh = minDepth(root->right);
        
//         return 1 + min(lh, rh);
        queue<TreeNode*> q;
        q.push(root);
        int i = 0;
        while(q.size()){
            i++;
            int k = q.size();
            for(int j = 0; j < k; j++){
                TreeNode* node = q.front();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                q.pop();
                if(node->right == NULL && node->left == NULL) return i;
            }
        }
        
        return -1;
    }
};