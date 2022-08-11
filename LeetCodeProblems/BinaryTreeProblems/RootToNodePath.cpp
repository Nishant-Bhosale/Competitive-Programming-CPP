/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool getPaths(vector<int>& ans, TreeNode* root, int B){
    if(!root) return false;
    
    ans.push_back(root->val);
    if(root->val == B){
        return true;
    }    
    
    if(getPaths(ans, root->left, B) ||
    getPaths(ans, root->right, B)){
        return true;
    }
    ans.pop_back();
    return false;
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    getPaths(ans, A, B);
    return ans;
}
