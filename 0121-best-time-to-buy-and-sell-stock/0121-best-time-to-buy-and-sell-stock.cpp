class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int init = prices[0];
        int profit = 0;
        for (int price:prices){
            if (price<=init){
                init = price;
            } else if (profit < price-init) {
                profit = price-init;
            }
        }
        return profit;
    }
};