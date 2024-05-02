class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> close(3);
        close['('] = ')';
        close['{'] = '}';
        close['['] = ']';
        stack<char> mem; 
        const char *str = "({[";
        for (char c : s){
            if (strchr(str,c)!=nullptr){
                mem.push(c);
            } else if(mem.empty()) {
                return false;
            } else if(c == close[mem.top()]){
                mem.pop();
            } else {
                return false;
            }
        }
        if (mem.empty()){
            return true;
        }
        return false;
    }
};