class Solution {
public:
    vector<string> res;

    void backtrack(string cur, int open, int close) {
        if (open == 0 && close == 0) {
            res.push_back(cur);
            return;
        }

        if (open > 0)
            backtrack(cur + "(", open - 1, close);

        if (close > open)
            backtrack(cur + ")", open, close - 1);
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", n, n);
        return res;
    }
};