class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        int maxi = INT_MIN;
        vector<int> answer(n,0);
        for(int i = n-1;i>-1;i--){
            if (temperatures[i]>=maxi){
                answer[i] = 0;
                maxi = max(maxi,temperatures[i]);
                continue;
            }
            if (temperatures[i] == temperatures[i+1]){
                answer[i] = answer[i+1] == 0 ? 0 : answer[i+1]+1; 
                continue;
            }
            int dist = 0;
            int j;
            for(j = i+1; j<n;j++){
                dist++;
                if (temperatures[i]<temperatures[j]){
                    break;
                }
            }
            if (j==n){dist = 0;}
            answer[i] = dist;
        }
    return answer;
    }
};