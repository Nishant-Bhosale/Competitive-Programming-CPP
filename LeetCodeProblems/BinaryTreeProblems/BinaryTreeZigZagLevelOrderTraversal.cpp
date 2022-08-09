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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        
        int flag = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> temp;
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node != NULL){
                    if(node->left != NULL){
                        q.push(node->left);
                    }
                    if(node->right != NULL){
                        q.push(node->right);
                    }
                    temp.push_back(node->val);
                }
            }
            if(flag % 2 != 0){
                reverse(temp.begin(), temp.end());
            }
            
            if(temp.size() > 0) ans.push_back(temp);
            flag++;
        }
        
        return ans;
    }
};