class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         vector<int> ans;

        // Step 1: Mark visited numbers
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0)
                nums[idx] = -nums[idx];
        }

        // Step 2: Find missing numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
        
    }
};