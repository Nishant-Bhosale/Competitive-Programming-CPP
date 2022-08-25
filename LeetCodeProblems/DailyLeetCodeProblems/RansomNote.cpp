class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size()) return false;
        
//         map<char, int> mp1;
//         map<char, int> mp2;
//         for(int i = 0; i < magazine.size(); i++){
//             mp1[magazine[i]]++;
//         }
//         for(int i = 0; i < ransomNote.size(); i++){
//             mp2[ransomNote[i]]++;
//         }
        
//         for(auto it : mp2){
//             char temp = it.first;
//             int cntTemp = it.second;
//             if(mp1.count(temp)){
//                 if(!(mp1[temp] - cntTemp >= 0)){
//                     return false;
//                 }
//             }else{
//                 return false;
//             }
//         }
        vector<int> arr(26, 0);
        
        for(auto it : magazine){
            arr[it - 'a']++;
        }
        
        for(auto it : ransomNote){
            if(arr[it - 'a']-- <= 0){
                return false;
            };
        }
        return true;
    }
};