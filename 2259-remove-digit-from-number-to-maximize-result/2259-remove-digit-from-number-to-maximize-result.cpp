class Solution {
public:
    string removeDigit(string number, char digit) {
        for(int index = 0;index<number.size();index++){
            if (number[index]==digit){
                if (number[index]<number[index+1]){
                    number.erase(index,1);
                    return number;
                }
            }
        }    
        for(int index = number.size()-1;index>=0;index--){
            if (number[index]==digit){
                number.erase(index,1);
                return number;
            }
        }
        return number;
    }
};