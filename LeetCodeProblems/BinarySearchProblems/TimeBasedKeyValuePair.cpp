class TimeMap {
public:
    map<string, vector<pair<string, int>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        auto it = upper_bound(mp[key].begin(), mp[key].end(), pair<string, int>("", timestamp), [](const pair<string, int>& a, const pair<string, int>& b){
            return a.second < b.second;
        });
        
        return it == mp[key].begin() ? "" : prev(it)->first;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */