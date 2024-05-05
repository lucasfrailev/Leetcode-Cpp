class Solution {
    
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stk;
        int ans = 0;
        heights.push_back(0);
        for(int i=0;i<heights.size();i++){
            int idx = i;
            while(!stk.empty() && heights[stk.top()]>heights[i]){
                int top = heights[stk.top()];
                stk.pop();
                int ran = stk.empty() ? -1 : stk.top();
                ans = max(ans,top*(i - ran -1));
            }
            stk.push(i);
        }
        return ans;
    }
};