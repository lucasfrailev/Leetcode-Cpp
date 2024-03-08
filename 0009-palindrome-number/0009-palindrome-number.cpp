class Solution {
public:
    bool isPalindrome(int x) {
        int max_digits = 12;
        vector<int> digits(max_digits);
        if (x < 0){
            return false;
        }
        int modulo = 1;
        int reminder = x;
        int counter = 0;
        while (modulo !=0 || reminder != 0){
            modulo = reminder % 10;
            reminder = (reminder-modulo) / 10;
            digits[counter] = modulo;
            ++counter;
        }
        --counter;
        for (int i = 0; i < (counter - (counter % 2))/2;++i){
            if (digits[i] != digits.rbegin()[max_digits-counter+i]){
                return false;
            } 
        }
        return true;
    }
};