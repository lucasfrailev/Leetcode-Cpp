class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> max(nums.size()-k+1,INT_MIN);
        deque<int> dq;
        for(int i = 0;i<nums.size();++i){
            if(!dq.empty() && dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if (i-k+1>=0){
            max[i-k+1] = nums[dq.front()];
            }
        }
        return max;
    }
};