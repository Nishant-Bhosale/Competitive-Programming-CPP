class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> st;
        int ans = 0;
        
        for(string s : words){
            string temp = "";
            for(char ch : s){
                temp += vec[ch - 'a'];
            }
            st.insert(temp);
        }
        
        return st.size();
    }
};