class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()) return false;
        vector<int> set1(26,0),set2(26,0);
        int n = s1.size();
        for(int i = 0; i<n;i++){
            set1[s1[i]-'a']+=1;
            set2[s2[i]-'a']+=1;
        }
        if (set1==set2) return true;
        for(int j = n;j<s2.size();j++){
            set2[s2[j-n]-'a']-=1;
            set2[s2[j]-'a']+=1;
            cout << endl;
            if (set1==set2){
                return true;
            }
        }
        return false;
    }
};