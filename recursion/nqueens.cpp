class Solution {
public:
    vector<vector<string>> ans;

    // Backtracking function
    // col -> current column where we need to place a queen
    void helper(int col,
                vector<int> &leftrow,
                vector<int> &lowdiag,
                vector<int> &updiag,
                vector<string> &board,
                int n) {

        // Base case:
        // If queens are placed in all columns,
        // store the current board configuration.
        if (col == n) {
            ans.push_back(board);
            return;
        }

        // Try placing a queen in every row of the current column
        for (int row = 0; row < n; row++) {

            // Check if current position (row, col) is safe
            // leftrow[row]           -> row occupied?
            // lowdiag[row + col]     -> '\' diagonal occupied?
            // updiag[n-1+col-row]    -> '/' diagonal occupied?
            if (leftrow[row] == 0 &&
                lowdiag[row + col] == 0 &&
                updiag[n - 1 + col - row] == 0) {

                // Place queen
                board[row][col] = 'Q';

                // Mark row and diagonals as occupied
                leftrow[row] = 1;
                lowdiag[row + col] = 1;
                updiag[n - 1 + col - row] = 1;

                // Recur for next column
                helper(col + 1, leftrow, lowdiag, updiag, board, n);

                // Backtrack:
                // Remove queen and unmark row/diagonals
                board[row][col] = '.';
                leftrow[row] = 0;
                lowdiag[row + col] = 0;
                updiag[n - 1 + col - row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        // Create an empty n x n chessboard filled with '.'
        vector<string> board(n);
        string s(n, '.');

        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        // Hash arrays for O(1) safety checking
        vector<int> leftrow(n, 0);       // Tracks occupied rows
        vector<int> lowdiag(2 * n - 1, 0); // Tracks '\' diagonals
        vector<int> updiag(2 * n - 1, 0);  // Tracks '/' diagonals

        // Start placing queens from column 0
        helper(0, leftrow, lowdiag, updiag, board, n);

        return ans;
    }
};

TC = O(N!)

Space Complexity
Board storage
O(N
2
)
