class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for (int i=0; i<nums.size(); i++){
            missing = missing ^ nums[i] ^ i;
        }
        return missing;
    }
};