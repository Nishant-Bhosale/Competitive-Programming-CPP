class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        
        map<int,int> mp;
        int sz1 = items1.size(), sz2 = items2.size();
        
        for(int i = 0; i < sz1; i++){
            if(mp.count(items1[i][0])){
                mp[items1[i][0]] += items1[i][1]; 
                continue;
            }
            mp[items1[i][0]] = items1[i][1];
        }
        
        for(int i = 0; i < sz2; i++){
            if(mp.count(items2[i][0])){
                mp[items2[i][0]] += items2[i][1]; 
                continue;
            }
            mp[items2[i][0]] = items2[i][1];
        }
        
        for(auto it : mp){
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ans.push_back(temp);
        }
        
        return ans;
    }
};