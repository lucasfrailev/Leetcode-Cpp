class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> close;
        close['('] = ')';
        close['{'] = '}';
        close['['] = ']';
        close['0'] = '0';
        vector<char> mem = {'0'};
        const char *str = "({[";
        for (char c : s){
            if (strchr(str,c)!=nullptr){
                mem.push_back(c);
            } else if(c == close[mem.back()]){
                mem.pop_back();
            } else {
                return false;
            }
        }
        if (mem.back() == '0'){
            return true;
        }
        return false;
    }
};