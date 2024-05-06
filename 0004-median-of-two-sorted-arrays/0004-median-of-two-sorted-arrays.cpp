class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size())
             return findMedianSortedArrays(nums2,nums1);
        int l1 = 0, r1 = nums1.size()-1, m = nums1.size()+nums2.size(), half = m/2;
        while(true){
            int m1 = int(floor(((l1+r1)/2.0))), m2 = half-m1-2;
            int nums1left = m1<0?INT_MIN:nums1[m1];
            int nums2left = m2<0?INT_MIN:nums2[m2];
            int nums1right = (m1+1)>(int(nums1.size())-1)?INT_MAX:nums1[m1+1];
            int nums2right = (m2+1)>(int(nums2.size())-1)?INT_MAX:nums2[m2+1];
            if (nums1left<=nums2right && nums2left<=nums1right){
                if (m%2){
                    return double(min(nums1right,nums2right));
                } else {
                    return (max(nums1left,nums2left)+min(nums1right,nums2right))/2.0;
                }
            } else if (nums1left>nums2right){
                r1 = m1-1;
            } else {
                l1 = m1+1;
            }
        }
        return 0;        
    }
};