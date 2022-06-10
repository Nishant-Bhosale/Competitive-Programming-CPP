class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>> posSpeed;
        
        for(int i = 0; i < speed.size(); i++){
            posSpeed.push_back({position[i], speed[i]});
        }
        
        sort(posSpeed.begin(), posSpeed.end());
        
        stack<pair<int, float>> st;

        for(int i = posSpeed.size() - 1; i >= 0; i--){
            float time = (target - posSpeed[i].first) / posSpeed[i].second; 
            if(!st.empty()){
                if(time <= (target - st.top().first) / st.top().second){
                    continue;
                }else{
                    st.push(posSpeed[i]);
                }
            }else{
                st.push(posSpeed[i]);
            }
        }
        
        return st.size();
    }
};