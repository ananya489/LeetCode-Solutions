class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long x=0;
        for(int i=0;i<n;i++){
            x^=nums[i];
        }
        long long  bit=x&(-x);
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(nums[i] & bit)
            a=a^nums[i];
            else
            b=b^nums[i];
        }
        return {a,b};
    }
};