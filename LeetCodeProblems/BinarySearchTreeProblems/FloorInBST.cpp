/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    if(root == NULL) return -1;
    
    int ans = -1;
    while(root){
        if(root == NULL) break;
        
        if(root->val == X) return X;
        if(X > root->val){
            ans = root->val;
            root = root->right;
        }else{
            root = root->left;
        }
    }
    
    return ans;
}