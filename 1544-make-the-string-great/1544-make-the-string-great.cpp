class Solution {
public:
    string makeGood(string s) {
        if (s.empty() && s.size()<2) return s;
        char dist = 'A'-'a';
        int flag = 0, reloop = 1;
        string ans;
        while (reloop){
            reloop = 0;
            for (int i =0; i<s.size();i++){
                if (((s[i]!=(s[i+1]+dist)) && ((s[i]+dist)!=(s[i+1]))) && !flag){                
                    ans+=s[i];
                    flag = 1;
                } else if(((s[i]==(s[i+1]+dist)) || ((s[i]+dist)==(s[i+1]))) && !flag) {
                    flag = 2;
                    reloop = 1;
                }
                flag--;
            }
            cout << ans << endl;
            if (reloop){
            s = ans;
            ans = {};
            }
        }
        return ans;
        }
};


