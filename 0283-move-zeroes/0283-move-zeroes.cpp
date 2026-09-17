class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[s],nums[i]);
                s++;
            }
        }
    }
};