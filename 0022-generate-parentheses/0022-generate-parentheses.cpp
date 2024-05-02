class Solution {
public:
    vector<string> generateParenthesis(int n) {
        unordered_set<string> set{"()"}, set_safe{"()"};
        unordered_map<int, unordered_set<string>> memory;
        memory[1] = set;
        for(int i = 1; i < n; i++){
            set_safe = set;
            for (string s : set_safe){
                set.erase(s);
                set.insert("()"+s);
                set.insert('(' + s + ')');
                set.insert(s + "()");
            }
            if (i-2>0){
                set_safe =  memory[2];
                unordered_set<string> set_safe2 = memory[i-1];
                for (string s : set_safe){
                    for (string t : set_safe2){
                        set.insert(s+t);
                        set.insert(t+s);
                    }
                }
            }
            if (i-3>0){
                set_safe =  memory[3];
                unordered_set<string> set_safe2 = memory[i-2];
                for (string s : set_safe){
                    for (string t : set_safe2){
                        set.insert(s+t);
                        set.insert(t+s);
                    }
                }
            }
            if (i-4>0){
                set_safe =  memory[4];
                unordered_set<string> set_safe2 = memory[i-3];
                for (string s : set_safe){
                    for (string t : set_safe2){
                        set.insert(s+t);
                        set.insert(t+s);
                    }
                }
            }
            memory[i+1] = set;
        }
        vector<string> output;
        for(string s : set){
            output.push_back(s);
        }
        return output;
    }
};
