class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
           sum+=nums[i];
        }
        int maxs=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxs=max(maxs,sum);
        }
        return double(maxs)/k;
    }
};