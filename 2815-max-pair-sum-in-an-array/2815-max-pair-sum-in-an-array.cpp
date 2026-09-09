class Solution {
public:
int largestDigit(int n) {
        int maxi = 0;

        while(n > 0) {
            int digit = n % 10;
            maxi = max(maxi, digit);
            n = n / 10;
        }
        return maxi;
    }

    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int digit1 = largestDigit(nums[i]);
                int digit2 = largestDigit(nums[j]);
                if(digit1==digit2){
                int sum=nums[i]+nums[j];
                if(sum>maxsum){
                    maxsum=sum;
                }
            }
            }
        }
     return maxsum;
    }
};