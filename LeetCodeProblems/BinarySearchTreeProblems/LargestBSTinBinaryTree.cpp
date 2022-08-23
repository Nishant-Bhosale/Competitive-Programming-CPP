
class NodeValue{
public:
    int maxNode, minNode, maxSize;
    NodeValue(int maxN, int minN, int sz){
        this->maxNode = maxN;
        this->minNode = minN;
        this->maxSize = sz;
    }
};

class Solution{
    private:
    NodeValue helper(Node* root){
        if(root == NULL) return NodeValue(INT_MIN, INT_MAX, 0);
        
        auto left = helper(root->left);
        auto right = helper(root->right);
        
        if(left.maxNode < root->data && right.minNode > root->data){
            return NodeValue(max(root->data, right.maxNode), min(left.minNode, root->data), 1 + left.maxSize + right.maxSize);
        }
        
        return NodeValue(INT_MAX, INT_MIN, max(left.maxSize, right.maxSize));
    }
    
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
        return helper(root).maxSize;
    }
};