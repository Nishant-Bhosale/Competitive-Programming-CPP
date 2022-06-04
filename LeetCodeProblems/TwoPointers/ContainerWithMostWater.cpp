class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        
        int ans = INT_MIN;
        while(left < right){
            int area = (right - left) * min(height[left], height[right]);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
            ans = max(ans, area);
        }
        
        return ans;
    }
};