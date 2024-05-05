class Solution {
    
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stk;
        int ans= 0;
        heights.push_back(0);
        for(int i=0;i<heights.size();i++){
            int idx = i;
            while(!stk.empty() && stk.top().second>heights[i]){
                ans = max(ans,stk.top().second*(i-stk.top().first));
                idx=stk.top().first;
                stk.pop();
            }
            stk.push({idx,heights[i]});
        }
        return ans;
    }
};