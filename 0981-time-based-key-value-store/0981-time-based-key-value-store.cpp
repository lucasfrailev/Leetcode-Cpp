class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> time_key;
    
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
            time_key[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int r = time_key[key].size()-1;
        if (r==-1){
            return "";
        } else{
            int l = 0, m = (r+l)/2;
            string best = "";
            while(l<=r){
                if (time_key[key][m].first==timestamp){
                    return time_key[key][m].second;
                }
                else if (time_key[key][m].first<timestamp){
                    best= time_key[key][m].second;
                    l = m+1;
                } else {
                    r = m-1;
                }
                m = (r+l)/2;
            }
            return best;
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */