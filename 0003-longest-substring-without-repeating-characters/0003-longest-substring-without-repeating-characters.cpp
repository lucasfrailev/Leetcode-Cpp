class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string curr;
        int best = 0;
        for(char c : s){
            size_t it = curr.find(c);
            if (it != string::npos){
                if(curr.size()>best){
                    best = curr.size();
                }
                curr.erase(curr.begin(),curr.begin()+it+1);
                curr+=c;
            } else {
                curr+=c;
            }
        }
        if(curr.size()>best){
            best = curr.size();
        }
        return best;
    }
};