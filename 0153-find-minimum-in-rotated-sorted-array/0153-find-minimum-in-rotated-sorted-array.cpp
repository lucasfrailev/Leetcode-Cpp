class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (nums.back()>nums[0]){
            return nums[0];
        }
        int oldnum = nums[0];
        for (int num : nums){
            if (oldnum>num){
                return num;
            }
        }
        return nums[0];
    }
};