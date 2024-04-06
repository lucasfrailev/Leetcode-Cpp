class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(char c:magazine){
            if (map.contains(c)){
                map[c]+=1;
            } else {
                map[c] = 1;
            }
        }
        for (char c:ransomNote){
            if (map.contains(c)){
                map[c]-=1;
                if (map[c]<0){
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};