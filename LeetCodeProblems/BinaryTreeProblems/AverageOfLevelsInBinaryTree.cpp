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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        solve(root, ans);
        return ans;
    }
    
public: 
    void solve(TreeNode* root, vector<double>& ans){
        if(root == NULL) return;
        queue<TreeNode*> q;
        
        q.push(root);
        while(q.size()){
            int sz = q.size();
            double temp = 0;
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                temp += (double)node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            ans.push_back(temp / sz);
        }
    }
};