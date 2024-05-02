class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        if(nums.size()==1){
            if(nums[0]==val){
                nums.pop_back();
                return 0;
            }
        }
        while(i<=j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                nums.pop_back();
            }
            else i++;
        }
        return nums.size();
    }
};