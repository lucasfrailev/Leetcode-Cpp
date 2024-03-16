class Solution {
public:
    vector<int> countBits(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> bits(n+1);
        for (int i = 0; i<n+1;i++){
            bits[i] = bits[i/2]+i%2; 
        }
        return bits;        
    }
};