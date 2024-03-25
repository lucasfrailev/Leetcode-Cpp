class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        unordered_set<int> set(nums.begin(),nums.end());
        for(int num:nums){
            set.insert(num);
        }
        int max_length = 0, length = 1;
        for (int num:nums){
            if (set.find(num-1)==set.end()){
                length = 1;
                while (set.find(num+length)!=set.end()){
                    length++;
                }
                if (length>max_length) max_length = length;
            }
        }        
        return max_length; 
    }
};