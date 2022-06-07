class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0){
            sort(nums1.begin(), nums1.end());
            return;
        }
        if(m == 0){
            for(int i = 0; i < n; i++){
                nums1[i] = nums2[i]; 
            }
            sort(nums1.begin(), nums1.end());
            return;
        }
        
        for(int i = m + n - 1; i >= m; i--){
            nums1[i] = nums2[i - m];
        }
        
        sort(nums1.begin(), nums1.end());
    }

   //  Optimized code
   int last = m + n - 1;
        
        while(m > 0 && n > 0){
            if(nums1[m - 1] > nums2[n - 1]){
                nums1[last] = nums1[m - 1];
                m--;
            }else{
                nums1[last] = nums2[n - 1];
                n--;
            }
            last--;
        }
        
        while(n > 0){
            nums1[last] = nums2[n - 1];
            n--;
            last--;
        }
};