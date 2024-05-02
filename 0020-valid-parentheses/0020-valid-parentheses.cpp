class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> close;
        close['('] = ')';
        close['{'] = '}';
        close['['] = ']';
        close['0'] = '0';
        stack<char> mem; 
        mem.push('0');
        const char *str = "({[";
        for (char c : s){
            if (strchr(str,c)!=nullptr){
                mem.push(c);
            } else if(c == close[mem.top()]){
                mem.pop();
            } else {
                return false;
            }
        }
        if (mem.top() == '0'){
            return true;
        }
        return false;
    }
};