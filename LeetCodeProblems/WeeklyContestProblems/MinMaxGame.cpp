class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
    
        if(n == 1) return nums[0];
        int temp = n;
        while(true){
            n = n/2;
            vector<int> res(n);
            
            for(int i = 0; i < res.size(); i++){
                    if(i % 2 == 0){
                        res[i] = min(nums[2*i], nums[2*i + 1]);
                    }else{
                        res[i] = max(nums[2*i], nums[2*i + 1]);
                    }
            }
            nums = res;
            if(res.size() == 1) {
                return res[0];
            };
        }
        
        return -1; 
    }
};