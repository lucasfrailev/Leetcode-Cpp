class Solution {
public:
    int getSum(int a, int b) {
        int aux = (a ^ b), carry = (a & b) << 1, mem;
        while (true){
            if (!(carry & aux)){
                return (carry | aux);
            } else{
                mem = (aux ^ carry);
                carry = (aux & carry) << 1;
                aux = mem;
            }
        }
        return {};
    }
};