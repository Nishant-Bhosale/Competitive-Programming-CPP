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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == NULL) return res;
        
        TreeNode* last = NULL;
        stack<TreeNode*> st;
        
        while(root || !st.empty()){
            if(root != NULL){
                st.push(root);
                root = root->left;
            }else{
                // if(st.empty()) break;
                TreeNode* node = st.top();
                
                if(node->right != NULL && last != node->right){
                    root = node->right;
                }else{
                    res.push_back(node->val);
                    last = node;
                    st.pop();
                }
            }
        }
        
        return res;
    }
};