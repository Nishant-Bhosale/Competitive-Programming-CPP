class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp1;
        map<string, int> mp2;
        
        mp1.insert({'I', 1});
        mp1.insert({'V', 5});
        mp1.insert({'X', 10});
        mp1.insert({'L', 50});
        mp1.insert({'C', 100});
        mp1.insert({'D', 500});
        mp1.insert({'M', 1000});
        mp2.insert({"IV", 4});
        mp2.insert({"IX", 9});
        mp2.insert({"XL", 40});
        mp2.insert({"XC", 90});
        mp2.insert({"CD", 400});
        mp2.insert({"CM", 900});
        
        int ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(i == s.size() - 1) {
                ans += mp1[s[i]];
                break;
            }
            
            cout<<(s.substr(i, 2))<<" ";
            if(mp2.count(s.substr(i, 2))){
                ans += mp2[s.substr(i, 2)];
                i++;
            }else{
                ans += mp1[s[i]];
            }
        }
        
        return ans;
    }
};