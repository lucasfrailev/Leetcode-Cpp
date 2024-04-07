class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        vector<int> pairs(1000001,-1);
        int min_dist = INT_MAX;
        for(int index = 0;index<cards.size();index++){
                if (pairs[cards[index]]>=0){
                    min_dist = min(min_dist, -pairs[cards[index]]+index+1);
                } 
            pairs[cards[index]]=index;
            }
        return (min_dist == INT_MAX ? -1 : min_dist);
    }
};