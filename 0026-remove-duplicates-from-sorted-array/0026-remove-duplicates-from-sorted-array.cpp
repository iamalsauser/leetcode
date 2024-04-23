#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int a = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                nums[a] = nums[i];
                a++;
            }
        }
        
        // Copy the last element
        nums[a] = nums[nums.size() - 1];
        a++;
        
        return a;
    }
};
