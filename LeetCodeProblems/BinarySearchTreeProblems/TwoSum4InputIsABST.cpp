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
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode*> st;
        vector<int> inorder;
        map<int,int> mp;
        while(true){
            if(root != NULL){
                st.push(root);
                root = root->left;
            }else{
                if(st.empty()) break;
                root = st.top();
                st.pop();
                inorder.push_back(root->val);
                mp[root->val]++;
                root = root->right;
            }
        }
        
        int left = 0, right = inorder.size() - 1;
        while(left < right){
            int sum = inorder[left] + inorder[right];
            if(sum == k){
                return true;
            }
            if(sum > k){
                right--;
            }else{
                left++;
            }
        }
        return false;
    }
};