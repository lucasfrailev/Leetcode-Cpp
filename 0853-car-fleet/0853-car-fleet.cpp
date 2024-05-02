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
        vector<float> time_to_target(n,0.0);
        float last_max_time = FLT_MIN;
        int ans = 0;
        for (int i = 0;i<n;i++){
            time_to_target[i] = float(target-aux[n-i-1][0])/float(aux[n-i-1][1]);
            if (time_to_target[i]>last_max_time){
                last_max_time = time_to_target[i];
                ans++;
            }
        }
        return ans;
    }
};