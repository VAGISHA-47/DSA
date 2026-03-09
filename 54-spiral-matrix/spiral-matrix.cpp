class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int startRow = 0;
        int endRow = m - 1;
        int startCol = 0;
        int endCol = n - 1;
        
        while(startRow <= endRow && startCol <= endCol) {
            for(int j = startCol; j <= endCol; j++) {
                ans.push_back(matrix[startRow][j]);
            }
            for(int i = startRow + 1; i <= endRow; i++) {
                ans.push_back(matrix[i][endCol]);
            }
            for(int j = endCol - 1; j >= startCol; j--) {
                if(startRow == endRow) break;
                ans.push_back(matrix[endRow][j]);
            }
            for(int i = endRow - 1; i > startRow; i--) {
                if(startCol == endCol) break;
                ans.push_back(matrix[i][startCol]);
            }
            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }
        
        return ans;
    }
};