class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<Node*> q;
        
        q.push(root);
        vector<int> first;
        first.push_back(root->val);
        ans.push_back(first);
        while(q.size()){
            int sz = q.size();
            vector<int> arr;
            for(int i = 0; i < sz; i++){
                Node* temp = q.front();
                q.pop();
                if(temp->children.size() > 0){
                    for(int i = 0; i < temp->children.size(); i++){
                        arr.push_back(temp->children[i]->val);
                        q.push(temp->children[i]);
                    }
                }
            }
            if(arr.size()) ans.push_back(arr);
        }
        
        return ans;
    }
};