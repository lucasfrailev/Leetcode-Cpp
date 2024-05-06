class TimeMap {
public:
    unordered_map<string,pair<vector<int>, vector<string>>> time_key;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        if (time_key[key].first.empty()){
            time_key[key] = {{timestamp},{value}};
        } else{
            time_key[key].first.push_back(timestamp);
            time_key[key].second.push_back(value);
        }
    }
    
    string get(string key, int timestamp) {
        if (time_key[key].first.empty()){
            return "";
        } else{
            int l = 0, r = time_key[key].first.size()-1, m = (r+l)/2;
            string best = "";
            while(l<=r){
                if (time_key[key].first[m]==timestamp){
                    return time_key[key].second[m];
                }
                else if (time_key[key].first[m]<timestamp){
                    best= time_key[key].second[m];
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