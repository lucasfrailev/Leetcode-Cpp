class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,vector<int>> lengths;
        vector<vector<string>> anagrams;
        for(int i=0;i<strs.size();i++){
            bool aux_flag= false;
            if (lengths.contains(strs[i].size())){
                for(int j:lengths[strs[i].size()]){
                    if (isAnagram(strs[i],anagrams[j][0])){
                        anagrams[j].push_back({strs[i]});
                        aux_flag = true;
                        break;
                    }
                }
                if (aux_flag == false){
                    anagrams.push_back({strs[i]});
                    lengths[strs[i].size()].push_back(anagrams.size()-1);
                }
            } else {
               anagrams.push_back({strs[i]});
               lengths[strs[i].size()] = {int(anagrams.size()-1)}; 
            }
        }
        return anagrams;
    }
    
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