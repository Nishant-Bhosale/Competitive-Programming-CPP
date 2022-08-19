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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        
        if(root->val == key){
            return helper(root);
        }
        
        TreeNode* temp = root;
        
        while(temp){
            if(temp->val > key){
                if(temp->left != NULL && temp->left->val == key){
                    temp->left = helper(temp->left);
                    break;
                }else{
                    temp = temp->left;
                }
            }else{
                if(temp->right != NULL && temp->right->val == key){
                    temp->right = helper(temp->right);
                    break;
                }else{
                    temp = temp->right;
                }
            }
        }
        
        return root;
    }

    TreeNode* helper(TreeNode* root){
        if(root->left == NULL){
            return root->right;
        }else if(root->right == NULL){
            return root->left;
        }
        TreeNode* rightChild = root->right;
        TreeNode* lastRight = getLastRight(root->left);
        lastRight->right = rightChild;
        return root->left;
    }
    
    TreeNode* getLastRight(TreeNode* root){
        if(root->right == NULL) return root;
        return getLastRight(root->right);
    }
};