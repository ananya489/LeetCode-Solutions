class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int l=1;
        sort(nums.begin(),nums.end());
        if(n==0)
        return 0;
        int lastsmaller=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                c=c+1;
                lastsmaller=nums[i];
            }
            else if(lastsmaller!=nums[i]){
                c=1;
                lastsmaller=nums[i];
            }
            l=max(l,c);
        }
        return l;
    }
};