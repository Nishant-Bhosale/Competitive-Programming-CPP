class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // vector<int> res;
        // Brute Force using vector
//         for(int i = 0; i < temperatures.size(); i++){
//             int j = i + 1;
//             int cnt = 1;
//             while(j < temperatures.size()){
//                 if(temperatures[j] > temperatures[i]){
//                     break;
//                 }
//                 if(j >= temperatures.size() - 1){
//                     cnt = 0;
//                     break;
//                 }
//                 cnt++;
//                 j++;
//             }
//             res.push_back(cnt);
//         }
//         res[res.size() - 1] = 0;
        
//         return res;
        
        stack<pair<int,int>> st;
        
        int n = temperatures.size();
        vector<int> res(n, 0);
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && st.top().first < temperatures[i]){
                int temp = st.top().first;
                int idx = st.top().second;
                st.pop();
                res[idx] = i - idx;
            }
            st.push({temperatures[i], i});
        }
        
        return res;
    }
};