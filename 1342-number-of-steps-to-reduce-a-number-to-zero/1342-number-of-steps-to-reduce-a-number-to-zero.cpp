class Solution {
public:
    int numberOfSteps(int num) {
        int n = 0;
        while (num!= 0 ){
            n+=1;
            if (!(num%2)){
                num >>= 1;
            } else {
                num-=1;
            }
        }
        return n;
    }
};