class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int rows = matrix.size();
        int columns = matrix[0].size();
        unordered_set<int> h_rows,h_columns;
        for (int i = 0;i<rows;i++){
            for (int j= 0; j<columns;j++){
                if (matrix[i][j] ==0){
                    h_rows.insert(i);
                    h_columns.insert(j);
                }
            }
        }
        for (int nums:h_rows){
            for (int j= 0; j<columns;j++){
                matrix[nums][j] = 0;
            }
        }
        for (int nums:h_columns){
            for (int i= 0; i<rows;i++){
                matrix[i][nums] = 0;
            }
        }
    }
};