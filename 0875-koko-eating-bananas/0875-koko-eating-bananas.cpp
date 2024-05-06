class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        if(h==piles.size()) return piles.back();
        int r = piles.back(), l = 1, m = max((r+l)/2,1), last_k = m, time = 0;
        while(l<=r){
            for(int p : piles){
                time+=  p/m + ((p-p/m*m)>0?1:0);
                if (time>h){
                    time = -1;
                    break;
                }
            }
            if (time < 0){
                l = m+1;
            } else {
                last_k = m;
                r = m-1;
            }
            m = (l+r)/2;
            time = 0;
        }
        return last_k;
    }
};