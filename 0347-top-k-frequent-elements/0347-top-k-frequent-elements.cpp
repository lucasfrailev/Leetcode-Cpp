class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int> freqs;
        vector<pair<int,int>> aux_sortable;
        vector<int> ans;
        for (int num:nums){
            freqs[num]++;
        }
        for (pair<int,int> i:freqs){
            aux_sortable.push_back({i.second,i.first});
        }
        sort(aux_sortable.begin(),aux_sortable.end());
        for (int j = 0;j<k;j++){
            ans.push_back(aux_sortable[aux_sortable.size()-j-1].second);
        }
        return ans;
    }
};