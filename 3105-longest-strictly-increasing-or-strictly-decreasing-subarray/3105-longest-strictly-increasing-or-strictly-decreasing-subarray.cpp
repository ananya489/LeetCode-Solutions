class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxlen=1;
        int currlen=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                currlen++;
                maxlen=max(maxlen,currlen);
            }
            else{
                currlen=1;
            }
        }
        currlen=1;
         for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                currlen++;
                maxlen=max(maxlen,currlen);
            }
            else{
                currlen=1;
            }
        }
        return maxlen;
    }
};