class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        vector<vector<int>> aux;
        aux.resize(n);
        for(int i = 0;i<n;i++){
            aux[i] = {position[i], speed[i]};
        }
        sort(aux.begin(),aux.end());
        float last_max_time = FLT_MIN, time_to_target;
        int ans = 0;
        for (int i = 0;i<n;i++){
            time_to_target = float(target-aux[n-i-1][0])/float(aux[n-i-1][1]);
            if (time_to_target>last_max_time){
                last_max_time = time_to_target;
                ans++;
            }
        }
        return ans;
    }
};