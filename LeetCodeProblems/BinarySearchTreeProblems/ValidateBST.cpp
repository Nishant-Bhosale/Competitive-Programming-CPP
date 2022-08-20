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
    bool isValidBST(TreeNode* root) {
        // return valid(root, LONG_MIN, LONG_MAX);
        if(root == NULL) return true;
        
        stack<TreeNode*> st;
        vector<int> res;
        while(true){
            if(root != NULL){
                st.push(root);
                root = root->left;
            }else{
                if(!st.size()) break;
                TreeNode* node = st.top();
                st.pop();
                res.push_back(node->val);
                root = node->right;
            }
        }
        
        bool isSorted = true;
        
        for(int i = 0; i < res.size() - 1; i++){
            if(!(res[i + 1] > res[i])){
                isSorted = false;
                break;
            }    
        }
        
        return !isSorted ? false : true;
    }

public: 
    bool valid(TreeNode* root, long left, long right){
        if(root == NULL) return true;
        
        if((root->val <= left || root->val >= right)){
            return false;
        }
        
        bool a = valid(root->left, left, root->val);
        bool b = valid(root->right, root->val, right);
        
        return a && b;
    }
};