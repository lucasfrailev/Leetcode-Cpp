class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> letter;
        int l = 0, maxf = 0, ans = 0;
        for (int i =0; i<s.size();i++){
            letter[s[i]]+=1;
            maxf = max(maxf,letter[s[i]]);
            while((i-l+1-maxf)>k){
                letter[s[l]]-=1;
                l++;   
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};