class Solution {
public:
    string makeGood(string s) {
        if (s.empty() && s.size()<2) return s;
        char dist = 'A'-'a';
        int last = 0, next = 1;
        string ans;
        ans+= s[last];
        while (next<s.size()){
            if ((ans[last] == (s[next]+dist)) || (ans[last]+dist == (s[next]))){
                ans.pop_back();
                last-=1;
                next+=1;
            } else {
                ans+=s[next];
                last+=1;
                next+=1;
            }
            if (last<0 && next<s.size()){
                last = 0;
                ans+=s[next];
                next+=1;
            }
        }
        return ans;
        }
};


