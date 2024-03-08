class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<string,int> dict    {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000},
    };
        int previous = 1000;
        int total = 0;
        for (std::string::size_type i = 0; i <s.size(); ++i){
            int current = dict[s.substr(i, 1)];
            if (previous < current){
                total = total - 2*previous + current;
            } else{
                previous = current;
                total = total + previous;
            }
        }
        return total;
    }
};