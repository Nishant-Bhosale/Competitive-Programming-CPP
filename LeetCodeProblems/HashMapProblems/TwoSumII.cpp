class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> res;
        // map<int, int> mp;
        
        // for(int i = 0; i < numbers.size(); i++){
        //     if(mp.find(target - numbers[i]) != mp.end()){
        //         res.emplace_back(mp[target - numbers[i]]);
        //         res.emplace_back(i + 1);
        //         break;
        //     }
        //     mp[numbers[i]] = i + 1;
        // }

         vector<int> res;
        int left = 0, right = numbers.size() - 1;
        
        while(left < right){
            int curSum = numbers[left] + numbers[right];
            if(curSum > target){
                right--;
            }else if(curSum < target){
                left++;
            }else{
                res.push_back(left+1);
                res.push_back(right+1);
                break;
            }
        }
                
        return res;
    }
};