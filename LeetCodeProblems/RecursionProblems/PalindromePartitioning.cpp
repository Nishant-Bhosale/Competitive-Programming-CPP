class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        getPartitions(s, 0, temp, ans);
        return ans;
    }
public:
    void getPartitions(string& s, int idx, vector<string>& temp, vector<vector<string>>& ans){
        if(idx == s.size()){
            ans.push_back(temp);
        }
        
        for(int i = idx; i < s.size(); i++){
            if(isPalindrome(s, idx, i)){
                temp.push_back(s.substr(idx, i - idx + 1));
                getPartitions(s, i + 1, temp, ans);
                temp.pop_back();
            }   
        }
    }
public:
    bool isPalindrome(string& s, int left, int right){
        while(left <= right){
            if(s[left++] != s[right--]) return false;
        }
        return true;
    }
};