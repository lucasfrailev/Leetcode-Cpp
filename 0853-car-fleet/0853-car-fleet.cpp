class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);     

        int n =position.size();
        vector<int> aux(n,0);
        iota(aux.begin(),aux.end(),0);
        sort(aux.begin(), aux.end(), [&](int a, int b) {
            return position[a] < position[b];
        });
        double last_max_time = DBL_MIN;
        int ans = 0;
        for (int i = n-1;i>=0;i--){
            double time = (double(target-position[aux[i]])/double(speed[aux[i]]));
            if (time>last_max_time){
                last_max_time = time;
                ans++;
            }
        }
        return ans;
    }
};