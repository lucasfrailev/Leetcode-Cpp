class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<unordered_set<char>> hor(9,unordered_set<char>()),vert(9,unordered_set<char>()),square(9,unordered_set<char>());
        for(int i = 0;i<9;i++){
            for (int j = 0;j<9;j++){
                if (board[i][j] != '.'){
                    if (hor[i].contains(board[i][j])) return false;
                    hor[i].insert(board[i][j]);
                    if (vert[j].contains(board[i][j])) return false;
                    vert[j].insert(board[i][j]);
                    int square_index = 3*(i/3)+(j/3);
                    if (square[square_index].contains(board[i][j])) return false;
                    square[square_index].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};