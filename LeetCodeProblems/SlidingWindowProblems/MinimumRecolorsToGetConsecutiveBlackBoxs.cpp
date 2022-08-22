class Solution {
public:
    int minimumRecolors(string s, int k) {
        int maxCons = -1;
        
        for(int i = 0; i < s.size(); i++){
            int cntW = 0, cntB = 0, t = 0;
            for(int j = i; j < s.size() && t < k; j++){
                if(s[j] == 'B'){
                    cntB++;                    
                }
                t++;
            }    
            
            maxCons = max({maxCons, cntB});
        }
        cout<<maxCons<<endl;
        return k - maxCons;
    }
};