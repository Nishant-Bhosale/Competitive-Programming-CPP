class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int ans = 0;
        auto it = s.find("01");
        if(it == string::npos){
            return ans;
        };
        while(true){ 
            auto it = s.find("01");
            if(it == string::npos){
                break;
            };
            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == '0' && s[i + 1] == '1'){
                    s[i] = '1';
                    s[i + 1] = '0';
                    i++;
                }
            }
            ans++; 
        }
        return ans;
    }
};