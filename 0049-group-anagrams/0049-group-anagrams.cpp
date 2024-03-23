class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<string>> anagrams, aux_anagrams;
        vector<string> aux_strs = strs;
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
            bool aux_flag= false;
            for(int j=0;j<anagrams.size();j++){
                if (strs[i] == anagrams[j][0]){
                    anagrams[j].push_back({strs[i]});
                    aux_anagrams[j].push_back({aux_strs[i]});
                    aux_flag = true;
                    break;
                }
            }
            
            if (aux_flag == false){
                anagrams.push_back({strs[i]});
                aux_anagrams.push_back({aux_strs[i]});
            }
        }
        return aux_anagrams;
    }
};