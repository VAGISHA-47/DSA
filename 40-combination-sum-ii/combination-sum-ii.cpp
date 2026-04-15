class Solution {
public:
    void solve(vector<int>& arr, int target, int index, 
               vector<int>& temp, vector<vector<int>>& ans) {
         if(target == 0) {
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < arr.size(); i++) {

            if(i > index && arr[i] == arr[i-1]) continue;

          
            if(arr[i] > target) break;

            temp.push_back(arr[i]);

            
            solve(arr, target - arr[i], i + 1, temp, ans);

            temp.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates, target, 0, temp, ans);
        return ans;
    }
};
    