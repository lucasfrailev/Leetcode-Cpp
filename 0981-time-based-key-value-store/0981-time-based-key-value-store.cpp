class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> time_key;
    
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
            time_key[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int r = time_key[key].size()-1, l = 0;
        if (r==-1){
            return "";
        } else{
            string best = "";
            while(l<=r){
                int m = l+(r-l)/2;
                if (time_key[key][m].first==timestamp){
                    return time_key[key][m].second;
                }
                else if (time_key[key][m].first<timestamp){
                    best= time_key[key][m].second;
                    l = m+1;
                } else {
                    r = m-1;
                }
            }
            return best;
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */