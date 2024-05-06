class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> unique;
        int best = 0, index = 0;
        for(char c : s){
            while (unique.contains(c)){
                unique.erase(s[index]);
                index++;
            }
            unique.insert(c);
            best = max(best,int(unique.size()));
        }
        return best;
    }
};