class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();
        int sum = INT_MIN, current_sum = 0, current_min_sum = 0, sum_min = INT_MAX, aux=0;
        for (int num:nums){
            current_sum = max(num, current_sum + num);
            sum = max(sum, current_sum);
            aux += num;
            current_min_sum = min(num, current_min_sum + num);
            sum_min = min(sum_min, current_min_sum);
        }
        return max(sum,(aux-sum_min == 0 ? INT_MIN : aux-sum_min));
     
    } 
};

