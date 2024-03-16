class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        set<vector<int>> my_set;
        vector<vector<int>> output;
        int n = nums.size(), last_num = nums[0]+1;
        if (n<3){
            return {};
        }
        for(int i=0; i<n-2;i++){
            if (nums[i]>0){
                break;
            }
            if (nums[i] == last_num){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while (k>j){
                if (nums[k]<0){
                        break;
                }
                int sum = nums[i]+nums[j]+nums[k];
                if (sum == 0){
                    my_set.insert({nums[i],nums[j],nums[k]});
                    j++;
                } else if (sum<0){
                    j++;
                } else {
                    k--;
                }
            }
            last_num = nums[i];
        }
        for (vector<int> set: my_set){
            output.push_back(set);
        }
        return output;
    }
};