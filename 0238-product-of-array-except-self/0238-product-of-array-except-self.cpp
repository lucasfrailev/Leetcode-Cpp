class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int> unique;
        vector<int> answer(nums.size()), auxs = nums;
        for (int index = 0; index <nums.size(); index++){
            if (unique.contains(auxs[index])){
               answer[index]=unique[auxs[index]]; 
            } else {
            auxs[index] = 1;
            int product = 1;
            for (int aux:auxs){
                product *= aux; 
            }
            answer[index]=product;
            auxs = nums;
            unique[auxs[index]]=product;
            }
        }
        return answer;
    }
};