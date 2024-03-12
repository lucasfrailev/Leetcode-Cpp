class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int begin = 0, end = 0, length = nums.size()-1, mid = begin + (length-begin+1)/2;
            while (true) {
                mid = begin + (length-begin)/2;
                if (target == nums[begin]){
                    return begin;
                } else if (target == nums[length]){
                    return length;
                } else if (target == nums[mid]){
                    return mid;
                }
                if (begin>=(length-1)){
                    return -1;
                }

                if (nums[begin]<nums[mid]){
                     if (target>nums[begin] && target<nums[mid]){
                         length = mid;
                     } else {
                         begin = mid;
                     }
                } else {
                     if (target<nums[begin] && target>nums[mid]){
                         begin = mid;
                     } else {
                         length = mid;
                     }
                }
            }
        return -1;
    }
};