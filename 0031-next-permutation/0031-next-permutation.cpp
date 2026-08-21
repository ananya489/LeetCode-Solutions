class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int r=n-2;
        while(r>=0 && nums[r]>=nums[r+1])
        r--;
            if(r>=0){
                int j=n-1;
            while(nums[r]>=nums[j]){
                j--;
            }
            swap(nums[r],nums[j]);
            }
            reverse(nums.begin()+r+1,nums.end());
    }
};