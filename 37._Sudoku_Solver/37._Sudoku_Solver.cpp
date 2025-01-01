class Solution {
public:

bool isSafe(int row,int col, vector<vector<char>>& sudoku, char val)
{
    for(int i = 0; i<sudoku.size();i++)
    {
        if(sudoku[row][i] == val)
        {
            return false;
        }
        if(sudoku[i][col] == val)
        {
            return false;
        }
        if(sudoku[3*(row/3) +i/3][3*(col/3)+i%3] == val)
            return false;
    }
    return true;
}
bool solve(vector<vector<char>> &sudoku)
{
    int n = sudoku[0].size();
    for(int row = 0;row<n;row++)
    {
        for(int col = 0; col<n;col++)
        {
            if(sudoku[row][col] == '.'){
                for(char val = '1';val <= '9'; val++)
                {
                    if(isSafe(row,col,sudoku,val))
                    {
                        sudoku[row][col] = val;
                        //recursion call
                        bool isFwd = solve(sudoku);
                        if(isFwd)
                            return true;
                        else{
                            sudoku[row][col] = '.';
                        }
                    }
                }
                return false;
            }
        }
        
    }
    return true;
}
void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};