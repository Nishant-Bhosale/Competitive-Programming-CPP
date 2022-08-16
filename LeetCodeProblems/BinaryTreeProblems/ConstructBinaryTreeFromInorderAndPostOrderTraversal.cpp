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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        
        TreeNode* ans = buildRealTree(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mp);
        return ans;
    }
    
public:
    TreeNode* buildRealTree(vector<int>& inorder, int is, int ie, vector<int>& postorder, int ps, int pe, map<int,int>& mp){
        if(is > ie || ps > pe) return NULL;
        
        TreeNode* root = new TreeNode(postorder[pe]);
        int idx = mp[root->val];
        int numsLeft = idx - is;
        
        root->left = buildRealTree(inorder, is, idx - 1, postorder, ps, ps + numsLeft - 1, mp);
        
        root->right = buildRealTree(inorder, idx + 1, ie, postorder, ps + numsLeft, pe - 1, mp);
        return root;
    }
};










