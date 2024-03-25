class Solution {
public:
    int climbStairs(int n) {
        if (n<2) return 1;
        vector<int> list(n+1);
        list[0]=1;
        list[1]=1;
        for (int i = 2; i<=(n);i++){
            list[i] = list[i-1]+list[i-2];
        }
        return list[n];
    }
};