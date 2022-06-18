class WordFilter {
public:
    // vector<string> w;
    // map<vector<char>, vector<pair<string, int>>> mp;
        unordered_map<string, int> hashMap;

    WordFilter(vector<string>& words) {
        // w = words;
       int n = words.size();
        for (int i = 0; i < n; i++) {
            string word = words[i];
            int wordSize = word.size();
            for (int j = 1; j <= wordSize; j++) {
                string p = word.substr(0, j);
                for (int k = 0; k < wordSize; k++) {
                    string s = word.substr(k, wordSize);
                    hashMap[p + "|" + s] = i + 1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
//         for(int i = w.size() - 1; i >= 0; i--){
//             string pre = "";
//             bool flag1 = false, flag2 = false;
//             for(int j = 0; j < prefix.size(); j++){
//                 if(w[i][j] == prefix[j]){
//                     pre += w[i][j];
//                 }else{
//                     break;
//                 }
//             }

//             if(pre == prefix ) flag1 = true;
//             string suf = "";
//             int idx = suffix.size() - 1;
//             for(int j = w[i].size() - 1; j >= 0; j--){
//                 if(idx < 0) break;
//                 if(w[i][j] == suffix[idx]){
//                     suf += w[i][j];
//                     idx--;
//                 }else{
//                     break;
//                 }
//             }
//             reverse(suf.begin(), suf.end());
//             if(suf == suffix) flag2 = true;
            
//             if(flag1 && flag2) return i;
//         }
        
//         vector<char> c;
//         c.push_back(prefix[0]);
//         c.push_back(suffix[suffix.size() - 1]);
        
//         vector<pair<string, int>> a = mp[c];
        
//         for(int i = a.size() - 1; i >= 0; i--){
//             string pre = "";
//             bool flag1 = false, flag2 = false;
//             for(int j = 0; j < prefix.size(); j++){
//                 if(a[i].first[j] == prefix[j]){
//                     pre += prefix[j];
//                 }else{
//                     break;
//                 }
//             }
            
//             if(pre == prefix ) flag1 = true;
//             string suf = "";
//             int idx = suffix.size() - 1;
//             for(int j = a[i].first.size() - 1; j >= 0; j--){
//                 if(idx < 0) break;
//                 if(a[i].first[j] == suffix[idx]){
//                     suf += suffix[idx];
//                     idx--;
//                 }else{
//                     break;
//                 }
//             }
//             reverse(suf.begin(), suf.end());
        
//             if(suf == suffix) flag2 = true;
            
//             if(flag1 && flag2) return a[i].second;
//         }
                
    string s = prefix + "|" + suffix;
    return hashMap[s] - 1;

        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */