class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        vector<int> target('z'-'A'+1,0),count('z'-'A'+1,0), index;
        int l = 0, min = INT_MAX, m = t.size(), counter = m, head = 0;
        for(int i = 0;i<m;i++){
            count[t[i]-'A']+=1;
        }
        for(int i = 0;i<s.size();i++){
            
            if(count[s[i]-'A']-->0) counter--;
            while(counter == 0){
                if ((i-l)<min){
                    min = (i-l+1);
                    head = l;
                }
                if (count[s[l]-'A']==0){
                    counter ++;
                }
                count[s[l]-'A']++;
                l++;
            } 
        }
        return  min==INT_MAX? "":s.substr(head, min);
    }
};
