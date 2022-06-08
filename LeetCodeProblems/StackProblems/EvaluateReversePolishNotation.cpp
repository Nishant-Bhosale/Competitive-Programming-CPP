class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int ans;
        map<string, int> mp;
        mp.insert({"+", 1});
        mp.insert({"-", 1});
        mp.insert({"*", 1});
        mp.insert({"/", 1});
        for(int i = 0; i < tokens.size(); i++){
            if(mp.count(tokens[i])){
                int firstNum = stoi(st.top());
                st.pop();
                int secondNum = stoi(st.top());
                st.pop();
                int res;
                if(tokens[i] == "+"){
                    res = firstNum + secondNum;
                }else if(tokens[i] == "-"){
                    res = secondNum - firstNum;
                }else if(tokens[i] == "/"){
                    res = secondNum / firstNum;
                }else if(tokens[i] == "*"){
                    res = firstNum * secondNum;
                }
                st.push(to_string(res));
            }else{
                st.push(tokens[i]);
            }
        }
       
        return stoi(st.top());
    }
};