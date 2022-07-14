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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0 || inorder.size() == 0){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[0]);
        auto mid = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
        
        vector<int> v1, v2;
        for(int i = 1; i < mid + 1; i++){
            v1.push_back(preorder[i]);
        }
        for(int i = 0; i < mid; i++){
            v2.push_back(inorder[i]);
        }
        
        root->left = buildTree(v1, v2);
        
        vector<int> v3, v4;
        for(int i = mid + 1; i < preorder.size(); i++){
            v3.push_back(preorder[i]);
        }
        for(int i = mid + 1; i < inorder.size(); i++){
            v4.push_back(inorder[i]);
        }
        root->right = buildTree(v3, v4);
        
        return root;
    }
};