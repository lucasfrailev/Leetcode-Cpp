class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX;
        int front = 0, back = 0, tmp = 0, n=nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0; i<n-2; i++){
            front = i+1;
            back = n-1;
            while(front<back){
                tmp = nums[i]+nums[front]+nums[back];
                if (tmp == target){
                    return target;
                } else if (tmp > target){
                    if (abs(closest) != min(abs(closest),tmp-target)){
                        closest = tmp-target;
                    };
                    back--;
                } else {
                    if (abs(closest) != min(abs(closest),target-tmp)){
                        closest = tmp-target;
                    };
                    front++;
                }
            }
        }
        return target+closest;
}
};