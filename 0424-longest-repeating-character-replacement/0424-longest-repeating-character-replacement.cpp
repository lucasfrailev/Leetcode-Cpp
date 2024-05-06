class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> letter(26, 0);
        int l = 0, maxf = 0, ans = 0;
        for (int i =0; i<s.size();i++){
            letter[s[i]-'A']+=1;
            maxf = max(maxf,letter[s[i]-'A']);
            while((i-l+1-maxf)>k){
                letter[s[l]-'A']-=1;
                l++;   
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};