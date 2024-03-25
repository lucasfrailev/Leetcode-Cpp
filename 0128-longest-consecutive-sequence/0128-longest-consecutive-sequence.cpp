class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num:nums){
            set.insert(num);
        }
        int max_length = 0, length = 1;
        for (int num:nums){
            if (set.find(num-1)==set.end()){
                length = 0;
                while (set.contains(num+length)){
                    length++;
                }
                if (length>max_length) max_length = length;
            }
        }        
        return max_length; 
    }
};