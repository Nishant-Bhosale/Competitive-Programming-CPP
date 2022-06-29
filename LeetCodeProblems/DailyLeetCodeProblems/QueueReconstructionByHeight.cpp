class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        auto comp = [](auto a, auto b){
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);   
        };
        sort(people.begin(), people.end(), comp);
        
        vector<vector<int>> res;
        
        for (auto p : people) {
            res.insert(res.begin() + p[1], p);
        }
        
        return res;
    }
};