class Solution {
public:
    vector<int> countBits(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> bits(n+1);
        for (int i = 0; i<n+1;i++){
            bits[i] = 0;
            int j = i;
            while (j!=0){
                if ((j & 1) == 1){
                    bits[i]+=1;
                }
                j >>= 1;
            }  
        }
        return bits;        
    }
};