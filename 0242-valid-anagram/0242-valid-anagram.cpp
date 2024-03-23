class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> letters;
        for (char& i : s){
            if (letters.contains(i)){
                letters[i]=letters[i]+1;
            } else {
                letters[i]=1;
            }
        }
        for (char& i : t){
            if (!letters.contains(i)){
                return false;
            }
            letters[i]=letters[i]-1;
            if (letters[i]==0){
                letters.erase(i);
            }
            
        }
        if (letters.empty()){
            return true;
        }
        return false;
    }
};