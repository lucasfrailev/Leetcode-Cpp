class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();
        vector<int> answer;
        answer.push_back(1);
        for (int i = 1; i<=n-1;i++){
            answer.push_back(nums[i-1]*answer[i-1]);
        }
        printf("\n");
        int aux_prod = 1;
        for (int i=n-1;i>=0;--i){
            answer[i] *= aux_prod;
            aux_prod *= nums[i];
        }
        return answer;
    }
};