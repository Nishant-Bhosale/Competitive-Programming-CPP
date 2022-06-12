class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        long long max_val = potions[m - 1]; 
        for(int i = 0; i < n; i++){
            int cnt = 0;
            // long long v = (long long)spells[i] * (long long)max_val;
            // if(v < success) {res.push_back(cnt);
            //     continue;
            // }
            float val = ceil(double(success*1.0/spells[i]));
            auto lb = lower_bound(potions.begin(), potions.end(), val);
            // int left = 0, right = m - 1;
            // bool flag1 = false, flag2 = false;
            // while(left <= right){
                // long long val1 = (long long)spells[i] * (long long)potions[left];
            //     long long val2 = (long long)spells[i] * (long long)potions[right];
            //     if(flag1 && flag2) break;
            //     if(val1 >= success){
            //         flag1 = true;
            //     }
            //     if(val2 >= success){
            //         flag2 = true;
            //     }
            //     if(!flag1) left++;
            //     if(!flag2) right--;
            // }
            // if(flag1 && flag2){
            //     cnt += right - left + 1;
            // }
            cnt += m - (lb - potions.begin());
            res.push_back(cnt);
        }
        
        return res;
    }
};