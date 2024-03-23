class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = strs.size();
        if (n<2) return {strs};
        vector<vector<string>> anagrams;
        vector<pair<string,int>> aux_strs;
        for(int i=0;i<n;i++){
            string aux = strs[i];
            sort(aux.begin(),aux.end());
            aux_strs.push_back({aux,i});
        }
        sort(aux_strs.begin(),aux_strs.end());
        int i=0;
        anagrams.push_back({strs[aux_strs[0].second]});
        for(int j=1;j<n;j++){
                if (aux_strs[j].first == aux_strs[j-1].first){
                    anagrams[i].push_back({strs[aux_strs[j].second]});
                } else {
                    i++;
                    anagrams.push_back({strs[aux_strs[j].second]});
                }
            }
        return anagrams;
    }
};