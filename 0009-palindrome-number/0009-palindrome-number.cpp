class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x!=0)){
            return false;
        } else if (x<10){
            return true;
        }
        int flipped = 0;
        while (x > flipped) {
            flipped = flipped * 10 + x % 10;
            x = x / 10;
        }
        if (x != flipped && x != flipped / 10){ 
            return false;
        }
        return true;
    }
};