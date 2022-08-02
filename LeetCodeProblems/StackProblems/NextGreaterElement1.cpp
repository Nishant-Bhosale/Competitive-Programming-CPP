class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        vector<int> ans(n1, -1);
        
        for(int i = 0; i < n1; i++){
            int idx = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            
            for(int j = idx; j < nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        
        return ans;
    }
};