class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int counter = 0;
        for (char& c : strs[0]){
            for (string& s : strs){
                printf("%c, %c\n",s[counter],c);
                if (c!=s[counter]){
                    return prefix;
                }
            }
            prefix += c;
            counter +=1;
        }
        return prefix;
    }
};