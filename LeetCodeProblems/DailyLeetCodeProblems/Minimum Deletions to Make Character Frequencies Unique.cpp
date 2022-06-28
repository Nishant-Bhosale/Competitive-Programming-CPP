class Solution {
public:
    int minDeletions(string s) {
        // sort(s.begin(), s.end());
        vector<int> freq(26, 0);
        
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a']++;
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        
        int cnt = 0;
        bool flag = false;
        for(int i = 0; i < freq.size() - 1; i++){
            if(freq[i] == 0 && freq[i + 1] == 0){
                break;
            }
            if(flag){
                cnt += freq[i];
                continue;
            }
            
            if(freq[i] == 0){
                flag = true;
            }
            
            if(freq[i] - freq[i + 1] >= 1){
                continue;
            }else if(freq[i] - freq[i + 1] < 1){
                int val = freq[i + 1] - freq[i] + 1;
                cnt += (val);
                freq[i + 1] -= val;
            }
            // else if(freq[i + 1] == 0 && freq[i] != 0 && i > 0){
            //     if(freq[i - 1] != 0){
            //         cnt++;
            //     }
            // }
        }
        
        return cnt;
    }
};