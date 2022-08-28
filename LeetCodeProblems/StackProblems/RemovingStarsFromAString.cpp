class Solution {
public:
    string removeStars(string s) {
        
        stack<char> st;
        
        for(auto it : s){
            st.push(it);
            if(it == '*'){
                st.pop();
                st.pop();
            }
        }
        
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
        // while(true){
        //     for(int i = 0; i < s.size(); i++){
        //         if(s[i] == '*'){
        //             int idx = i - 1;
        //             while(s[idx] == '*'){
        //                 idx--;
        //             }
        //             s.erase(idx, 2);
        //         }
        //     }
        //     if(count(s.begin(),s.end(), '*') <= 0) break;
        // }
        // return s;
    }
};