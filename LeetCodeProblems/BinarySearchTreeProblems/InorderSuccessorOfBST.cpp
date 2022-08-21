class Solution{
    public:
 
 void getInorder(Node* root, vector<int>&v){
   
   if(root){
       getInorder(root->left,v);
       v.push_back(root->data);
       getInorder(root->right,v);
   }
}

 public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(root == NULL) return NULL;
        Node* successor = NULL;
        
        while(root != NULL){
            if(root->data > x->data){
                successor = root;
                root = root->left;
            }else{
                root = root->right;
            }
        }
        
        return successor;
    }
//   public:
//     // returns the inorder successor of the Node x in BST (rooted at 'root')
//     Node * inOrderSuccessor(Node *root, Node *x)
//     {
//         if(root == NULL) return NULL;
//         vector<int> inorder;
        
//         getInorder(root, inorder);
        
//         for(int i = 0; i < inorder.size(); i++){
//             if(inorder[i]==x->data){
//                 Node * temp = new Node(inorder[i+1]);
//                 x=temp;
//                 break;
//             }
     
//             if(inorder[inorder.size()-1]==x->data){
//                 Node* temp = new Node(-1);
//                 x=temp;
//                 break;
//             }
//         }
        
//         return x;
//     }
};