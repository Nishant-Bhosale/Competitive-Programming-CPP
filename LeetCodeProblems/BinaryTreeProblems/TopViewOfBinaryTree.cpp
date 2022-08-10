class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int,int> mp;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        
        while(!q.empty()){
            auto pr = q.front();
            q.pop();
            Node* node = pr.first;
            int dist = pr.second;
            
            if(!mp.count(dist)){
                mp[dist] = node->data;
            }
            
            if(node->left){
                q.push({node->left, dist - 1});
            }
            if(node->right){
                q.push({node->right, dist + 1});
            }
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }

};