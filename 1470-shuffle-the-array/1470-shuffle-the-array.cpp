class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=n;
        vector<int>v;
        vector<int>v1;
        vector<int>res;
        for(int i=0;i<x;i++)
        {
            v.push_back(nums[i]);
        }
        for(int i=x;i<n*2;i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=0;i<x;i++)
        {
            res.push_back(v[i]);
            res.push_back(v1[i]);
        }
        return res;
    }
};