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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        long long ans = 1;
        
        queue<pair<TreeNode*,int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int sz = q.size();
            long long start = q.front().second;
            long long end = q.back().second;
            
            ans = max(ans, end - start + 1);

            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front().first;
                long long idx = q.front().second;
                q.pop();
                
                if(node->left){
                    q.push({node->left, 2*idx + 1});  
                }
                
                if(node->right){
                    q.push({node->right, 2*idx + 2});
                }
            }
        }
        
        return ans;
    }
};