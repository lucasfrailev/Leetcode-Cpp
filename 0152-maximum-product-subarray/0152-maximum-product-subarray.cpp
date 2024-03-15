class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int max_prod = INT_MIN, prod = 1, n = nums.size();
        for (int i = 0; i<n;i++){
            prod *= nums[i];
            max_prod = max(max_prod,prod);
            if (prod == 0){
                prod = 1;
            }
        }
        prod = 1;
        for (int i = n-1; i>=0;i--){
            prod *= nums[i];
            max_prod = max(max_prod,prod);
            if (prod == 0){
                prod = 1;
            }
        }
        return max_prod;
    }
};