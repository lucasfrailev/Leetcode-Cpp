class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        vector<pair<int,double>> aux;
        for(int i = 0;i<n;i++){
            aux.push_back({position[i],double(target-position[i])/double(speed[i])});
        }
        sort(aux.begin(), aux.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
        double last_max_time = DBL_MIN;
        int ans = 0;
        for (int i = n-1;i>=0;i--){
            if (aux[i].second>last_max_time){
                last_max_time = aux[i].second;
                ans++;
            }
        }
        return ans;
    }
};