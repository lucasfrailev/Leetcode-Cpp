class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
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