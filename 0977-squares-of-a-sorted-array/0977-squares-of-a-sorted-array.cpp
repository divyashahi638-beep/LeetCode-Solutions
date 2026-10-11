class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                b.push_back(-nums[i]);
            } else {
                a.push_back(nums[i]);
            }
        }

        reverse(b.begin(), b.end());

        vector<int> res;
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                res.push_back(a[i] * a[i]);
                i++;
            } else {
                res.push_back(b[j] * b[j]);
                j++;
            }
        }

        while (i < a.size()) {
            res.push_back(a[i] * a[i]);
            i++;
        }

        while (j < b.size()) {
            res.push_back(b[j] * b[j]);
            j++;
        }

        return res;
    }
};