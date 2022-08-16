/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "";
        string ans = "";
        
        queue<TreeNode*> q;
        q.push(root);
                  
        while(q.size()){
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                if(!node){
                    ans += "N,";
                    continue;
                }else{
                    ans += to_string(node->val) + ',';
                }
                
                if(node != NULL){
                    q.push(node->left);
                    q.push(node->right);
                }
            }
        }
        cout<<ans;
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;
        stringstream s(data);
        string str;
        getline(s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            TreeNode* node = q.front();
            q.pop();
            string temp;
            getline(s, temp, ',');
            if(temp == "N"){
                node->left = NULL;
            }else{
                node->left = new TreeNode(stoi(temp));   
                q.push(node->left);
            }
            
            getline(s, temp, ',');
            
            if(temp == "N"){
                node->right = NULL;
            }else{
                node->right = new TreeNode(stoi(temp));
                q.push(node->right);
            }
        }
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));