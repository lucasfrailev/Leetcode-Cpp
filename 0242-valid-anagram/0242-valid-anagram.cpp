class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;   
    }
};