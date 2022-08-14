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
// public:
//     int countNodes(TreeNode* root) {
//         if(root == NULL) return 0;
//         int ans = 0;
        
//         queue<TreeNode*> q;
//         q.push(root);
//         ans++;
//         while(q.size()){
//             int sz = q.size();
//             for(int i = 0; i < sz; i++){
//                 auto node = q.front();
//                 q.pop();
//                 if(node->left){
//                     ans++;
//                     q.push(node->left);
//                 }
//                 if(node->right){
//                     ans++;
//                     q.push(node->right);
//                 }
//             }
//         }
        
//         return ans;
//     }
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        
        int ans = getHeight(root);
        
        return ans;
    }

public: 
    int getHeight(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        int lh = getLeftHeight(root->left);
        int rh = getRightHeight(root->right);

        if(lh == rh){
            return pow(2, lh + 1) - 1;
        }
        
        return 1 + getHeight(root->left) + getHeight(root->right);
    }
public:
    int getLeftHeight(TreeNode* root){
        int ans = 0;
        while(root){
            root = root->left;
            ans++;
        }
        return ans;
    }
public:
    int getRightHeight(TreeNode* root){
        int ans = 0;
        while(root){
            root = root->right;
            ans++;
        }
        return ans;
    }
};