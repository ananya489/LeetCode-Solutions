class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n=nums.size();
        int maxval=nums[0];
        for (int i = 0; i < n - 2; i++) {
            maxval = max(maxval, nums[i]);

            if (maxval > nums[i + 2]) {
                return false;
            }
        }

        return true;
    }
};