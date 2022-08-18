class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> mp;
        
        int sz = arr.size();
        
        for(int i = 0; i < sz; i++){
            mp[arr[i]]++;
        }
        
        vector<pair<int, int>> vec;
        
        for(auto it : mp){
            vec.push_back({it.second, it.first});
        }
        
        sort(vec.rbegin(), vec.rend());
        int ans = 0;
        int temp = 0;
        
        for(auto it : vec){
            if(temp >= sz/2) return ans;
            if(it.first >= sz / 2){
                return 1;
            }else{
                temp += it.first;
                ans++;
            }
        }
       
    
        return ans;
    }

};