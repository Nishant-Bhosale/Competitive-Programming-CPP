class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> res;
        for(int i = 0; i < searchWord.size(); i++){
            vector<string> temp;
            int cnt = 0;
            for(int j = 0; j < products.size(); j++){
                if(cnt >= 3) break;
                
                if(products[j].substr(0,i + 1) == searchWord.substr(0, i + 1)){
                    temp.push_back(products[j]);
                    cnt++;
                } 
            }
            
            res.push_back(temp);
        }
        
        return res;
    }
};