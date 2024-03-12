class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> uniques;
        for(int i=0;i<nums.size();++i){
            if (uniques.contains(nums[i])){
                return true;
            }
            uniques[nums[i]] = true;
        }
        return false;
    }
};