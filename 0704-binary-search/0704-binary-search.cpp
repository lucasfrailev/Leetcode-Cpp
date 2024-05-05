class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, l = 0, r = nums.size(), m = r/2;
        while(i<nums.size()+1){
            if(nums[m] == target){
                return m;
            } else if(nums[m]<target){
                l=m;
            } else {
                r = m;
            }
            m=(r+l)/2;
            i++;
        }
        return -1;
    }
};