
class Solution {
public:
    bool isSolveable(int row, int col, char num,
                     vector<vector<char>>& board) {

        int N = 9;

        for(int x = 0; x < N; x++) {

            // Check row (skip current cell)
            if(x != col && board[row][x] == num)
                return false;

            // Check column (skip current cell)
            if(x != row && board[x][col] == num)
                return false;

            // Check 3x3 subgrid
            int r = row - row % 3 + x / 3;
            int c = col - col % 3 + x % 3;

            if((r != row || c != col) && board[r][c] == num)
                return false;
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(board[i][j] >= '1' && board[i][j] <= '9') {

                    if(!isSolveable(i, j, board[i][j], board))
                        return false;
                }
            }
        }

        return true;
    }
};
