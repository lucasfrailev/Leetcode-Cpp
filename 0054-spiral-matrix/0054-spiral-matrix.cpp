class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (matrix.empty()) return {};
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<int> answer;
        int n = rows*columns;
        answer.reserve(n);
        if (rows == 1){
            for(int j = 0;j<columns;j++){
                answer.push_back(matrix[0][j]);
            }
            return answer;
        } else if (columns == 1 ){
            for(int i = 0;i<rows;i++){
                answer.push_back(matrix[i][0]);
            }
            return answer;
        }
        int first_row = 0, first_column = 0;
        while ((first_row<rows) || (first_column<columns)){
            for (int j = first_column;j<columns;j++){
                answer.push_back(matrix[first_row][j]);
            }
            if (answer.size() == n) break;
            first_row++;
            for (int i = first_row;i<rows;i++){
                answer.push_back(matrix[i][columns-1]);
            }
            if(answer.size() == n) break;
            columns--;
            for (int j = columns-1;j>=first_column;j--){
                answer.push_back(matrix[rows-1][j]);
            }
            if(answer.size() == n) break;
            rows--;
            for (int i = rows-1;i>=first_row;i--){
                answer.push_back(matrix[i][first_column]);
            }
            if(answer.size() == n) break;
            first_column++;
        }
        return answer;
    }
};