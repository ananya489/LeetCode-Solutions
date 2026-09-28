class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minc=INT_MAX;
        int l=0;
        int s=0;
        for(int r=0;r<n;r++){
            s+=nums[r];
            while(s>=target){
                int c=r-l+1;
                 minc=min(minc,c);
                 s-=nums[l];
                 l++;
            }
        }
        if(minc==INT_MAX){
            return 0;
        }
        return minc;
    }
};