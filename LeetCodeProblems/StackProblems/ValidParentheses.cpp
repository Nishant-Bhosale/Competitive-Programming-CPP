class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        map<char, char> mp;
        
        mp.insert({'}', '{'});
        mp.insert({')', '('});
        mp.insert({']', '['});
        
        for(int i = 0; i < s.size(); i++){
            if(mp.count(s[i])){
                if(!st.empty() && st.top() == mp[s[i]]){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(s[i]);
            }
        }
        
        return (st.empty() ? true : false);
    }
};