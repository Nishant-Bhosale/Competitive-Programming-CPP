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
    void markParents(TreeNode* root, map<TreeNode*, TreeNode*>& mp, TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node->left){
                mp[node->left] = node;
                q.push(node->left);
            }
            if(node->right){
                mp[node->right] = node;
                q.push(node->right);
            }
        }
    }
    
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*, TreeNode*> mp;
        markParents(root, mp, target);
        
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        
        q.push(target);
        visited[target] = true;
        int cur_distance = 0;
        while(q.size()){
            if(cur_distance++ == k) break;
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left && !visited[node->left]){
                    visited[node->left] = true;
                    q.push(node->left);
                }
                
                if(node->right && !visited[node->right]){
                    visited[node->right] = true;
                    q.push(node->right);
                }
                
                if(mp[node] && !visited[mp[node]]){
                    visited[mp[node]] = true;
                    q.push(mp[node]);
                }
            }
        }
        
        vector<int> ans;
        while(q.size()){
            TreeNode* node = q.front();
            q.pop();
            
            ans.push_back(node->val);
        }
        
        return ans;
    }
};