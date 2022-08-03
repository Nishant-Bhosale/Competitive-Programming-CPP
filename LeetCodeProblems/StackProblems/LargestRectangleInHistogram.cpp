class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = *max_element(heights.begin(), heights.end());
        int sz = heights.size();
        stack<pair<int,int>> st;
        for(int i = 0; i < heights.size(); i++){
            int startIdx = i;
            while(!st.empty() && st.top().second > heights[i]){
                ans = max(ans, (st.top().second * (i - st.top().first)));
                startIdx = st.top().first;
                st.pop();
            }
            st.push({startIdx, heights[i]});
        }
        
        while(!st.empty()){
            pair<int,int> tmp = st.top();
            ans = max(ans, tmp.second * (sz - tmp.first));
            st.pop();
        }
        
        return ans;
    }
};