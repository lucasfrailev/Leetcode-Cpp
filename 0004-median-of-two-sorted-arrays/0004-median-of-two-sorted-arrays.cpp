class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A;
        vector<int> B;
        if (nums1.size()>nums2.size()){
            A = nums2;
            B = nums1;
        } else {
            A = nums1;
            B = nums2;
        }
        int l1 = 0, r1 = A.size()-1, m = A.size()+B.size(), half = m/2;
        while(true){
            int m1 = int(floor(double((l1+r1)/2.0))), m2 = half-m1-2;
            int Aleft = m1<0?INT_MIN:A[m1];
            int Bleft = m2<0?INT_MIN:B[m2];
            int Aright = (m1+1)>(int(A.size())-1)?INT_MAX:A[m1+1];
            int Bright = (m2+1)>(int(B.size())-1)?INT_MAX:B[m2+1];
            if (Aleft<=Bright && Bleft<=Aright){
                if (m-2*half == 1){
                    return double(min(Aright,Bright));
                } else {
                    return double(max(Aleft,Bleft)+min(Aright,Bright))/2.0;
                }
            } else if (Aleft>Bright){
                r1 = m1-1;
            } else {
                l1 = m1+1;
            }
        }
        return 0;        
    }
};