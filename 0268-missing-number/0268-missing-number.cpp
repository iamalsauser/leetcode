class Solution {
public:
    // time/space: O(n)/O(1)
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * n + n) >> 1;
        for (auto& num : nums) sum -= num;
        return sum;
    }
};