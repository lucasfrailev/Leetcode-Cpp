class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> map(256,0);
        for(char c:magazine){
                map[c]++;
        }
        for (char c:ransomNote){
            map[c]--;
            if (map[c]<0){
                return false;
            }
        }
        return true;
    }
};