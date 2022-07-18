class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans = -1;
        
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i + 1; j < nums.size(); j++){
        //         if(i == j) continue;
        //         if(checkDigitSum(nums[i], nums[j])){
        //             ans = max(ans, nums[i] + nums[j]);
        //         }
        //     }    
        // }
        
        map<int,int>  mp;
        for(int i = 0; i < nums.size(); i++){
            int sum = getSumOfDigits(nums[i]);
            if(mp[sum]){
                ans = max(ans, nums[i] + mp[sum]);
            }  
            
            mp[sum] = max(mp[sum], nums[i]);
        }
        
        return ans;
    }
    
public: 
    int getSumOfDigits(int a){
        int ans1;
        while(a != 0){
            ans1 += a % 10;
            a /= 10;
        }
        return ans1;
    }
};