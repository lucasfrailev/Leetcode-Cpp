class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        set<vector<int>> my_set;
        vector<vector<int>> output;
        int n = nums.size(), last_i = nums[0]+1, last_j = nums[1]+1, last_k = nums[n-1]-1;
        if (n<3){
            return {};
        }
        for(int i=0; i<n-2;i++){
            if (nums[i]>0){
                break;
            }
            if (nums[i] == last_i){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while (k>j){
                if (nums[k]<0){
                        break;
                }
                int sum = nums[i]+nums[j]+nums[k];
                last_j=nums[j];
                last_k=nums[k];
                if (sum == 0){
                    my_set.insert({nums[i],nums[j],nums[k]});
                    j++;
                    while (nums[j]==last_j && j<k){
                        j++;
                    }
                } else if (sum<0){
                    j++;
                    while (nums[j]==last_j && j<k){
                        j++;
                    }
                } else {
                    k--;
                    while (nums[k]==last_k && k>j){
                        k--;
                    }
                }
            }
            last_i = nums[i];
        }
        for (vector<int> set: my_set){
            output.push_back(set);
        }
        return output;
    }
};