class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX;
        for (int i = 0; i<nums.size();i++){
            for (int j = i+1; j<nums.size();j++){
                int sum = nums[i]+nums[j];
                for (int k = j+1; k<nums.size();k++){
                    if (abs(closest) != min(abs(closest),abs(target-sum-nums[k]))){
                        closest = target-sum-nums[k];
                    }
                }
            }
        }
        return (target-closest);
}
};