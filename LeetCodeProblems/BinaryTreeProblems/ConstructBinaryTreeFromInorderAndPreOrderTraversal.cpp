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
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         if(preorder.size() == 0 || inorder.size() == 0){
//             return NULL;
//         }
        
//         TreeNode* root = new TreeNode(preorder[0]);
//         auto mid = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
        
//         vector<int> v1, v2;
//         for(int i = 1; i < mid + 1; i++){
//             v1.push_back(preorder[i]);
//         }
        
//         for(int i = 0; i < mid; i++){
//             v2.push_back(inorder[i]);
//         }
        
//         root->left = buildTree(v1, v2);
        
//         vector<int> v3, v4;
       
//         for(int i = mid + 1; i < preorder.size(); i++){
//             v3.push_back(preorder[i]);
//         }
        
//         for(int i = mid + 1; i < inorder.size(); i++){
//             v4.push_back(inorder[i]);
//         }
        
//         root->right = buildTree(v3, v4);
        
//         return root;
//     }
// };

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        
        TreeNode* ans = buildRealTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
        return ans;
    }
public: 
    TreeNode* buildRealTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int,int> &mp){
        if(preStart > preEnd || inStart > inEnd) return NULL;
        
        TreeNode* root = new TreeNode(preorder[preStart]);
        
        int idxRoot = mp[root->val];
        int numsLeft = idxRoot - inStart;
        
        root->left = buildRealTree(preorder, preStart + 1, preStart + numsLeft, inorder, inStart, idxRoot -         1, mp);
        
        root->right = buildRealTree(preorder, preStart + numsLeft + 1, preEnd, inorder, idxRoot + 1, inEnd,           mp);
        
        return root;
    }
};










