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
    int goodNodes(TreeNode* root) {
        int ans = 0;
        getCountOfGoodNodes(root, ans, INT_MIN);
        return ans;
    }
    
    void getCountOfGoodNodes(TreeNode* root, int& ans, int maxVal){
        if(root == NULL) return;
        
        if(root->val >= maxVal){
            maxVal = root->val;
            ans++;
        }
        
        getCountOfGoodNodes(root->left, ans, maxVal);
        getCountOfGoodNodes(root->right, ans, maxVal);
    }
};