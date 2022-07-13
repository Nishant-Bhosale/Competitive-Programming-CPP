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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int qLength = q.size();
            vector<int> curLevel;
            
            for(int i = 0; i < qLength; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node != NULL){
                    curLevel.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            
            if(curLevel.size() > 0) res.push_back(curLevel);
        }
        
        return res;
    }
};