class Solution {
public:
     bool isSafe1(int row, int col, vector < string > board, int n) {
      // check upper element
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    void nQueens(int c, int n, vector<string> &temp, vector<vector<string>> &ans)
    {
       if(c==n){
           ans.push_back(temp);
           return;
       }

       for(int i = 0; i < n; i++)
       {
           if(isSafe1(i, c, temp, n)){
               temp[i][c] = 'Q';
                nQueens(c+1,n,temp,ans);
                temp[i][c] = '.';
           }
         
       }
        
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
          vector < string > board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }
        nQueens(0,n,board,ans);
        return ans;
    }
};
