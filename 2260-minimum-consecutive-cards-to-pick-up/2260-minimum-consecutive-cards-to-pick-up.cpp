class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> pairs;
        int min_dist = INT_MAX;
        for(int index = 0;index<cards.size();index++){
                if (pairs.contains(cards[index])){
                    min_dist = min(min_dist, -pairs[cards[index]]+index+1);
                } 
            pairs[cards[index]]=index;
            }
        return (min_dist == INT_MAX ? -1 : min_dist);
    }
};