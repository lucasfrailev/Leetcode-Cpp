class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = height.size(), left = 0,  right = n-1, left_max = INT_MIN, right_max = INT_MIN, total_sum = 0;
        while (left<right)
            if (height[left]<height[right]){
                if (height[left]<left_max){
                    total_sum += left_max-height[left];
                } else {
                    left_max = height[left];
                }
                left++;
            } else {
                if (height[right]<right_max){
                    total_sum += right_max-height[right];
                } else {
                    right_max = height[right];
                }  
                right--;
            }
        return total_sum;
    }
};
