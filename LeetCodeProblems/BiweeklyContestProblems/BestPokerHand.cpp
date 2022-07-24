class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char, int> mpCh;
        vector<int> arr(13, 0);
        
        for(int i = 0; i < ranks.size(); i++){
            arr[ranks[i] - 1]++;    
        }
        
        for(char ch : suits){
            mpCh[ch]++;
        }
        
         for(auto it : mpCh){
            if(it.second == 5){
                return "Flush";
            }
        }
        
        int ans = *max_element(arr.begin(), arr.end());
        
        if(ans >= 3){
            return "Three of a Kind";
        }else if(ans == 2){
            return "Pair";
        }
        return "High Card";
    }
};