class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t flipped = 0;
        for (int i = 0;i<32;i++){
            flipped <<=1;
            flipped += ((n >> i) & 1);
        }
        return flipped;
    }
};