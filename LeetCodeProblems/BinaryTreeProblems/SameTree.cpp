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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        bool ans = check(p, q);
        return ans;
    }

public:
    bool check(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL){
            return true;
        }
        if(p == NULL || q == NULL) return false;
        
        if(p->val != q->val) return false;
        
        bool pb = check(p->left, q->left);
        bool qb = check(p->right, q->right);
        
        return pb && qb;
    }
};