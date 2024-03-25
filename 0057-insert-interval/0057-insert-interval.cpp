class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> answer;
        bool done = false;
        for (int i = 0;i<intervals.size();++i){
            if (intervals[i][0]>newInterval[1]){
                if (!done){
                answer.insert(answer.end(),newInterval);
                done = true;
                }
                answer.insert(answer.end(),intervals[i]);
            } else if (intervals[i][1]<newInterval[0]){
                answer.insert(answer.end(),intervals[i]);
            } else if (intervals[i][1]>newInterval[1] && intervals[i][0]<newInterval[0]){
                answer.insert(answer.end(),intervals[i]);
                done = true;
            } else {
                newInterval = {min(intervals[i][0],newInterval[0]),max(intervals[i][1],newInterval[1])};
            }
        }
        if (answer.empty()){
            answer.insert(answer.end(),newInterval);
        } else if (answer.back()[1]<newInterval[0]){
            answer.insert(answer.end(),newInterval);
        }
        return answer;
    }
};