class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m.count(t - nums[i])) return {m[t-nums[i]], i};
            m[nums[i]] = i;
        }
        return {0, 0};
    }
};