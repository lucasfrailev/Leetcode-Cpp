class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int sum = nums[0], sum_p = 0, sum_n = 0, init = 0;
        for (int num:nums){
            if (num <= 0){
                if (sum_p == 0){
                    if (sum<num){
                        sum = num;
                    }
                    continue;
                } else if (-(sum_n+num)>sum_p){
                    sum_p = 0;
                    sum_n = 0;
                } else {
                    sum_n +=num;
                }
            } else {
                if (sum_n+num>0){
                    sum_p += sum_n + num;
                    sum_n = 0;
                } else {
                    sum_n += num;
                }
            }
            if (sum_p > sum && sum_p != 0){
                sum = sum_p;
            }
        }
    return sum;      
    }
};