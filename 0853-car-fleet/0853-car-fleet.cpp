class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        vector<pair<int,double>> aux;
        aux.resize(n);
        for(int i = 0;i<n;i++){
            aux[i] = {position[i],double(target-position[i])/double(speed[i])};
        }
        sort(aux.begin(),aux.end());
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