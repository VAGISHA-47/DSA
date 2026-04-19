class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] != 0) return false;
        vector<pair<int,int>> moves = {
            {2,1}, {2,-1}, {-2,1}, {-2,-1},
            {1,2}, {1,-2}, {-1,2}, {-1,-2}
        };
        vector<pair<int,int>> pos(n * n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                pos[grid[i][j]] = {i, j};
            }
        }
        for (int k = 0; k < n * n - 1; k++) {
            int x1 = pos[k].first;
            int y1 = pos[k].second;
            int x2 = pos[k + 1].first;
            int y2 = pos[k + 1].second;

            bool valid = false;
            for (auto move : moves) {
                if (x1 + move.first == x2 && y1 + move.second == y2) {
                    valid = true;
                    break;
                }
            }
            if (!valid) return false;
        }
        return true;
    }
};