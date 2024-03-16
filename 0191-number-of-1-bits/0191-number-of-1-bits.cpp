class Solution {
public:
    int hammingWeight(uint32_t n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int count=0;
        
        while (n!=0){
            if ((n & 1) == 1){
                count ++;
            }
            n >>= 1;
        }
        return count;
    }
};