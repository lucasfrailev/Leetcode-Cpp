class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth(accounts.size(),0);
        int max_wealth = 0;
        for (int i =0; i<accounts.size();i++){
            for (int j = 0; j< accounts[0].size();j++)
            wealth[i] += accounts[i][j];
            max_wealth = (wealth[i]>max_wealth ? wealth[i] : max_wealth);
        }
        return max_wealth;
    }
};