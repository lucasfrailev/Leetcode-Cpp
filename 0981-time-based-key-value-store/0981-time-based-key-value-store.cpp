class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> time_key;
    
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
            time_key[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        const vector<pair<int, string>>& list =  time_key[key];
        int r = list.size()-1, l = 0;
        if (r==-1){
            return "";
        } else{
            if (list[0].first > timestamp) return "";
            string best = "";
            while(l<=r){
                int m = l+(r-l)/2;
                if (list[m].first==timestamp){
                    return list[m].second;
                }
                else if (list[m].first<timestamp){
                    best= list[m].second;
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