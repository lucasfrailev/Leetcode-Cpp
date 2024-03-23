class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (nums.size()==k) return nums;
        sort(nums.begin(),nums.end());
        vector<int> ans(k,0), frequencies(k,0);
        int count = 1, index = 0;
        sort(nums.begin(),nums.end());
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]){
                count++;
            } else {
                bool flag = false;
                for (int j=k-1;j>=0;j--){
                    if (count >= frequencies[j]){
                        flag = true;
                    } else {
                        index = j+1;
                        break;
                    }
                }
                if (flag){
                    frequencies.insert(frequencies.begin()+index,1,count);
                    ans.insert(ans.begin()+index,1,nums[i-1]);
                    frequencies.pop_back();
                    ans.pop_back();
                }
                count = 1;
                index = 0;
            }
        }
        bool flag = false;
        for (int j=k-1;j>=0;j--){
            if (count >= frequencies[j]){
                flag = true;
            } else {
                index = j+1;
                break;
            }
        }
        if (flag){
            frequencies.insert(frequencies.begin()+index,1,count);
            ans.insert(ans.begin()+index,1,nums[nums.size()-1]);
            frequencies.pop_back();
            ans.pop_back();
        }
        return ans;
    }
};