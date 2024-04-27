class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        for (int i = 0, j = i + 1; i < s - 1 && j < s;  j++) {
            if (nums[i] != 0) {
                i++;
                continue;
            }
            if (nums[j] != 0) swap(nums[i++], nums[j]);
        }
    }
};