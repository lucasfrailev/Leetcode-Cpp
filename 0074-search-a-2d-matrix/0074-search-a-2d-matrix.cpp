class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix[0].size()-1, m = (l+r)/2, l_r = 0;
        while(true){
            if (target == matrix[l_r][r] || target == matrix[l_r][l]){
                return true;
            } else if (target<matrix[l_r][r] && target > matrix[l_r][l]){
                break;
            } else {
                l_r++;
                if (l_r==matrix.size()){
                    return false;                        
                }
            }
        }
        while(l<=r){
            if(matrix[l_r][m]==target){
                return true;
            } else if (matrix[l_r][m]<target){
                l = m+1;
            } else {
                r = m-1;
            }
            m=(l+r)/2;
        }
        return false;
    }
};