class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int l = 0, r = nums.size()-1, m = r/2;
        while(true){
            if (l>r){
                return -1;
            } else if(nums[m] == target){
                return m;
            } else if(nums[m]<target){
                l=m+1;
            } else {
                r = m-1;
            }
            m=(r+l)/2;
        }
        return -1;
    }
};