class Solution {
public:
    string longestPalindrome(string s) {
        // Brute Force
        // string ans = "";
        // int maxSize = INT_MIN;
        // for(int i = 0; i < s.size(); i++){
        //     string str = "";
        //     for(int j = i; j < s.size(); j++){
        //         str += s[j];
        //         string temp = str;
        //         int sz = str.size();
        //         // reverse(temp.begin(), temp.end());
        //         // if(str == temp && sz > maxSize){
        //         //     ans = str;
        //         //     maxSize = sz;
        //         // }
        //         // return str;
        //         if(isPalindrome(str) && sz > maxSize){
        //                 maxSize = sz;
        //                 ans = str;
        //         }
        //     }
        // }
        // return ans;
        
        if(s == "" || s.size() < 1) return "";
        if(s.size() == 1) return s;
        int start = 0, end = 0;
        for(int i = 0; i < s.size(); i++){
            int length1 = expandAroundCenter(s, i, i);
            int length2 = expandAroundCenter(s, i, i + 1);
            
            int len = max(length1, length2);
            if(len > end - start){
                start = i - (len - 1) / 2;
                end= i + len / 2;
            }
        }
        
        string res = "";
        for(int i = start; i <= end; i++){
            res += s[i];
        }
        
        return res;
    }
    
public:
    int expandAroundCenter(string s, int left, int right){
        int l = left, r = right;
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        
        return r - l - 1;
    }
// public:
//     bool isPalindrome(string s){
//         string temp = s;
//         reverse(temp.begin(), temp.end());
//         if(temp == s) return true;
//         return false;
//     }
};