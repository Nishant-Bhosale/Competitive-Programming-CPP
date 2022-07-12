class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
//         map<int,int> mp;
//         for(int i = 0; i < matchsticks.size(); i++){
//             mp[matchsticks[i]]++;
//         }
        
//         int cnt = 1;
//         for(int i = 0; i < matchsticks.size() - 1; i++){
//             if(matchsticks[i] == maxEl){
//                 cnt++;
//                 continue;
//             }
            
//             if(matchsticks[i] < maxEl){
//                 int val = maxEl - matchsticks[i];
//                 if(mp.count(val) && mp[val] > 0){
//                     mp[val]--;
//                     mp[matchsticks[i]]--;
//                     cnt++;
//                 }
//             }
//         }
        
//         cout<<cnt<<endl;
        
//         return cnt == 4;
        
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0LL);
        int sideLen = sum / 4;
        
        if(sum % 4 != 0) return false;
        
        vector<int> res(4,0);
        
        sort(matchsticks.rbegin(), matchsticks.rend());
        
        return backtrack(0, matchsticks, res, sideLen);
    }
    
public:
    bool backtrack(int i, vector<int>& ms, vector<int>& sides, int sideLen){
        if(i == ms.size()) return true;
        
        for(int j = 0; j < 4; j++){
            if(sides[j] + ms[i] <= sideLen){
                sides[j] += ms[i];
                if(backtrack(i + 1, ms, sides, sideLen)){
                    return true;
                }
                sides[j] -= ms[i];
            }
        }
        
        return false;
    }
};