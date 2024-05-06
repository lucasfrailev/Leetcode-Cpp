class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> unique;
        int best = 0, index = 0;
        for(int i = 0;i<s.size();i++){
            while (unique.contains(s[i])){
                unique.erase(s[index]);
                index++;
            }
            unique.insert(s[i]);
            best = max(best,i-index+1);
        }
        return best;
    }
};