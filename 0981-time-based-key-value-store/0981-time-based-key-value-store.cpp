class TimeMap {
public:
    unordered_map<string,map<int,string>> time_key;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        time_key[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if (time_key[key].empty()){
            return "";
        }
        auto it = time_key[key].upper_bound(timestamp); 
        if ( it == time_key[key].begin()){
            return "";
        } else {
            --it;
            return (*it).second;
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */