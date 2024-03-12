class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniques;
        for (int num : nums){
            if (uniques.contains(num)){
                return true;
            }
            uniques.insert(num);
        }
        return false;
    }
};