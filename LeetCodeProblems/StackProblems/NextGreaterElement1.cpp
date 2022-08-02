class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        vector<int> ans(n1, -1);
        
//         for(int i = 0; i < n1; i++){
//             int idx = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            
//             for(int j = idx; j < nums2.size(); j++){
//                 if(nums2[j] > nums1[i]){
//                     ans[i] = nums2[j];
//                     break;
//                 }
//             }
//         }
        stack<int> st;
        map<int, int> mp;
        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]] = i;
        }
        
        for(int i = nums2.size() - 1; i >= 0; i--){
            if(st.empty()){
                st.push(nums2[i]);
                nums2[i] = -1;
                continue;
            }
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            int tp = nums2[i];
            if(!st.empty()){
                int temp = st.top();   
                nums2[i] = temp;
            }else{
                nums2[i] = -1;
            }
            st.push(tp);
        }
        
        for(int i = 0; i < n1; i++){
            if(mp.count(nums1[i])){
                ans[i] = nums2[mp[nums1[i]]];
            }
        }
        
        return ans;
    }
};