class Solution {
public:
void solve(vector<int>& candidates, int target, vector<int>& temp, int start, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) continue;

            temp.push_back(candidates[i]);
            solve(candidates, target - candidates[i], temp, i, ans); // reuse allowed
            temp.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates, target, temp, 0, ans);
        return ans;
    }
};
