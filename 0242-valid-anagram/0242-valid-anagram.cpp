class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (s.size()!=t.size()) return false;
        vector<int> count(26,0);
        for (char letter:s){
            count[letter-'a']++;
        }
        for (char letter:t){
            count[letter-'a']--;
            if (count[letter-'a']<0) return false;
        }
        for (int i = 0; i<26;i++){
            if (count[i]!=0) return false;
        }
        return true;
    }
};