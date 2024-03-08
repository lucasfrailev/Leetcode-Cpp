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
        {"IV", 4},
        {"IX", 9},
        {"XL", 40},
        {"XC", 90},
        {"CD", 400},
        {"CM", 900},
    };
        int previous = 1000;
        int total = 0;
        for (std::string::size_type i = 0; i <s.size(); ++i){
            if (previous < dict[s.substr(i, 1)]){
                total = total - previous + dict[s.substr(i - 1, 2)];
            } else{
                previous = dict[s.substr(i, 1)];
                total = total + previous;
            }
        }
        return total;
    }
};