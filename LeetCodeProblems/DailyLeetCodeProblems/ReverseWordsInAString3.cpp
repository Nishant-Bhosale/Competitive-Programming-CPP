#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int cur = 0;
        for(int i = 0; i < s.size(); i++){
            if(i == s.size() - 1){
                reverse(s.begin() + cur, s.begin() + i + 1);
                continue;
            }
            if(s[i] == ' '  || i == s.size() - 1){
                reverse(s.begin() + cur, s.begin() + i);
                cur = i + 1;
            }
        }
        
        return s;
    }
};